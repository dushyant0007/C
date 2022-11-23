#include <stdio.h>

#include <stdlib.h>
#include<string.h>
// To -> run
// make fileName
// ./fileName

// int	%d
// char	%c
// float	%f
// double	%lf
// short int	%hd
// unsigned int	%u
// long int	%li
// long long int	%lli
// unsigned long int	%lu
// unsigned long long int	%llu
// signed char	%c
// unsigned char	%c
// long double	%Lf


int main(void){

  printf("Start\n");
  printf("hello, world\n");
  int length  = strlen("HELLO"); 

// All are same
// char c[] = "abcd";
// char c[50] = "abcd";
// char c[] = {'a', 'b', 'c', 'd', '\0'};
// char c[5] = {'a', 'b', 'c', 'd', '\0'};
// -->MEMORY [a][b][c][d][\0]

  // int use 4 bytes 
  int a = 50;
  int *p = &a;
  // size of pointer 8 bytes

  char *s = "Hello";
 
  // "Hello" -> 'H','e','l','l','o','\0'
  //  s -> stores the address of H
  //  sizeof(char) = 1 byte

  printf("-> %c \n",s);  
  printf("%s , %c \n",s,s[0]);  
  printf("%p , %c \n",s,s[0]);
  printf("%p , %c \n",&s[0],s[0]);
  printf("%p , %c \n",&s[1],s[1]);
  printf("%s , %c \n",&s[2],s[2]);
  printf("%p , %c \n",&s[3],s[3]);
  printf("%p , %c \n",&s[4],s[4]);
  printf("%p , %c \n",&s[5],s[5]);
  printf("%p , %c \n",&s[6],s[6]);
  printf("%p , %c \n",&s[7],s[7]);
  printf("-->%p , %c \n",(s+7),*(s+7));
  printf("%p , %c \n",(s+8),*(s+8));

  // %s start printing continuously till find null char

  printf("NEXT -> \n");


  int number[] = {4,6,8,2,7,5,0};
  printf("%p , %d \n",number,number[0]);
  printf("%p , %d \n",number+1,number[1]);
  printf("%p , %d \n",number+2, *(number + 2));
  printf("%p , %d \n",*(number+2), *(number + 2));



  // malloc -> return first byte address of reserved continuos memory
// the calloc() function allocates memory and initializes all bits to zero.

   char *ss = malloc(4);
  //  The expression results in a NULL pointer if the memory cannot be allocated.

   *ss = 'O';
   *(ss+1) = 'n';
   *(ss+2) = 'e';
   *(ss+3) = '\0';
   printf("NEXT->\n %s\n",ss);
    free(ss);

  //  NULL and \0  same thing
  // NULL for pointer and \0 for str

                // ↓-> starting address of previously  allocated memory using malloc
//  ptr = realloc(ptr, n2 * sizeof(int));
// change the size of previously allocated memory using the realloc() function



 char name[30] = "HERO Singh  ";
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // To get spaces with input unlike scanf
    printf("Name: ");
    puts(name);
    printf("-> %s ",name);


// The gets() function can also be to take input from the user.
//  However, it is removed from the C standard.

// It's because gets() allows you to input any length of characters.
//  Hence, there might be a buffer overflow.

//  In string.h
//	strlen(string_name)	--> returns the length of string name.
//	strcpy(destination, source)	--> copies the contents of source string to destination string.
//	strcat(first_string, second_string)	--> concats or joins first string with second string. The result of the string is stored in first string.
//	strcmp(first_string, second_string)	--> compares the first string with second string. If both strings are same, it returns 0.
//	strrev(string) --> returns reverse string.
//	strlwr(string) --> returns string characters in lowercase.
//	strupr(string) --> returns string characters in uppercase.


} 