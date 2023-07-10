#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define ELF_HEADER_SIZE 64

typedef struct Elf64_Ehdr
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * display_elf_header - Displays the information contained in the ELF header
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < 16; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[6]);
	printf("  OS/ABI:                            %d\n", header->e_ident[7]);
	printf("  ABI Version:                       %d\n", header->e_ident[8]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, otherwise 98
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file '%s'\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file '%s'\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (!(header.e_ident[0] == 0x7f && header.e_ident[1] == 'E' && header.e_ident[2] == 'L' && header.e_ident[3] == 'F'))
	{
		dprintf(STDERR_FILENO, "Error: File '%s' is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}
