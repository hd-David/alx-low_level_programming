#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void read_elf_header(int file_descriptor, Elf64_Ehdr *header)
{
    if (read(file_descriptor, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        perror("read");
        exit(98);
    }
}

void validate_elf_file(Elf64_Ehdr *header)
{
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: not an ELF file\n");
        exit(98);
    }
}

void display_elf_header(Elf64_Ehdr *header)
{
  int i;
    printf("Magic:   ");
    for ( i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:                             ");
    printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:                              ");
    printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           ");
    printf("%u\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            ");
    printf("%u\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       ");
    printf("%u\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    printf("%u\n", header->e_type);
    printf("Entry point address:               ");
    printf("%#010x\n", (unsigned int)header->e_entry);
}

int main(int argc, char *argv[])
{
  int file_descriptor;
  Elf64_Ehdr header;
  if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        return 98;
    }

    file_descriptor = open(argv[1], O_RDONLY);
    if (file_descriptor < 0)
    {
        perror("open");
        return 98;
    }

    
    read_elf_header(file_descriptor, &header);
    validate_elf_file(&header);
    display_elf_header(&header);

    close(file_descriptor);
    return 0;
}
