
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  FILE *fptr;

  fptr = fopen("program.txt", "r");

  //  <-------------->

  // fscanf(fptr,"%d", &num);
  // printf("Value of n=%d ", num);

  //  <-------------->

  // Reading file world by world
  // EOF -> end of file
  // One fptr read a string/world then automatically fptr go to next string/world

  // char c[100]; // Max size of a single world
  // while(fscanf(fptr, "%s", c)!=EOF){
  //  printf("%s ",c);
  //  }

  // read only string not spaces and whenever a space comes jumps to next string
  // this because we print("%s->This space <-");

  //  <-------------->

  // read char by char form file
  // This also read spaces and take care of line (print in consol as it is)
  // char c1;
  // while ((c1 = fgetc(fptr)) != EOF)
  // {
  //   printf("%c", c1);
  // }

  //  <-------------->

  // fgets read the next 6 char of line and store in text[6] with spaces and take care of lines line
  char text[6];
  fgets(text, 6, fptr);
  printf("%s", text);

  //  or

  // while (fgets(text, 6, fptr)!=NULL)
  // {
  //   printf("%s", text);
  // }

  //  <-------------->

  fclose(fptr);

  return 0;
}