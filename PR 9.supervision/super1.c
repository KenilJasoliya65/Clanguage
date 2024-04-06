//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.

#include <stdio.h>

int main() {

  FILE *even_file = fopen("even.txt", "w");
  FILE *odd_file = fopen("odd.txt", "w");

  for (int i = 50; i <= 70; i++) 
  {
    if (i % 2 == 0) 
    {
      fprintf(even_file, "%d\n", i);
    } else {
      fprintf(odd_file, "%d\n", i);
    }
  }

  fclose(even_file);
  fclose(odd_file);

  return 0;
}