#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
void print_diagsums(int *a, int size);
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */
