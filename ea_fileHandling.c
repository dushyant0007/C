// r
// Open for reading.
// If the file does not exist,
// fopen() returns NULL.

// rb
// Open for reading in binary mode.
// If the file does not exist,
// fopen() returns NULL.

// w
// Open for writing.	If the file exists,
// its contents are overwritten.
// If the file does not exist, it will be created.

// wb
// Open for writing in binary mode.
// If the file exists, its contents are overwritten.
// If the file does not exist, it will be created.

// a
// Open for append.
// Data is added to the end of the file.
// If the file does not exist, it will be created.

// ab
// Open for append in binary mode.
// Data is added to the end of the file.
// If the file does not exist, it will be created.

// r+
// Open for both reading and writing.
// If the file does not exist,
// fopen() returns NULL.

// rb+
// Open for both reading and writing in binary mode.
// If the file does not exist, fopen() returns NULL.

// w+
// Open for both reading and writing.
// If the file exists, its contents are overwritten.
// If the file does not exist, it will be created.

// wb+
// Open for both reading and writing in binary mode.
// If the file exists, its contents are overwritten.
// If the file does not exist, it will be created.

// a+
// Open for both reading and appending.
// If the file does not exist, it will be created

// ab+
// Open for both reading and appending in binary mode.
// If the file does not exist, it will be created.

#include <stdio.h>
#include <stdlib.h>

int main()
{

  // use appropriate location if you are using MacOS or Linux
  FILE *fptr = fopen("program.txt", "w");

  if (fptr == NULL)
  {
    printf("Error!");
    exit(1);
  }

  int num;
  printf("Enter num: ");
  scanf("%d", &num);

  // Treat as a single unit"%d",num just like in printf
  fprintf(fptr, "%d", num);
  // fprintf(fptr," Something in file");

  char *c = " computer";
  fputs(c,fptr);
  // fputs("Some string",Fptr);
  // fputc('a',fptr);//writing single character into file  

  fclose(fptr);

  return 0;

}