#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c);
int main()
{
  char *arr = create_array(5, 'A');
  int i;
  if (arr == NULL) {
    printf("Failed to create array\n");
    return 1;
  }

  for (i = 0; i < 5; i++) {
    printf("%c ", arr[i]);
  }
  printf("\n");

  free(arr);

  return 0;
}
