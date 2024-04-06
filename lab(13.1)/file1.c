//Q.1 Write a Program to read content from one file and write it to another file.
#include <stdio.h>

int main() 
{
  FILE *source = fopen("kenil.txt", "r");
  if (source == NULL) 
  {
    printf("Error opening source file.\n");
    return 1;
  }

  FILE *target = fopen("rw.txt", "w");
  if (target == NULL)
  {
    printf("Error opening target file.\n");
    fclose(source);
    return 1;
  }

  char ch;
  while ((ch = fgetc(source)) != EOF) {
    fputc(ch, target);
  }

  fclose(source);
  fclose(target);

  printf("File copied successfully.\n");

  return 0;
}