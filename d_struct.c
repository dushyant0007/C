#include <stdio.h>
#include <stdlib.h>
// personPtr->age is equivalent to (*personPtr).age

struct Distance{
  int feet;
  float inch;
};

typedef struct Distance {
  int feet;
  float inch;
}DD;


int main() {

  struct Distance d1, d2;
  DD dx;
  DD dy;
}

// Nested structures

struct complex {
  int imag;
  float real;
};

struct number {
  struct complex comp;
  int integer;
} num1;

int main_1() {
 num1.comp.imag = 11;
 num1.comp.real = 5.25;
 num1.integer = 6;
}

struct student {
   char name[50];
   int age;
};

// function prototype
void display(struct student *s);

int main_2() {
   
   
   struct student *s1 = (struct student*) malloc(sizeof(struct student));;

   printf("Enter name: ");

   // read string input from the user until \n is entered
   // \n is discarded
  //  scanf("%[^\n]%*c", s1->name);
   fgets(s1->name,sizeof(s1->name),stdin);
 
   printf("Enter age: ");
   scanf("%d", &(s1->age));

   display(s1); // passing struct as an argument
    
   printf("\nHere is the age ➡️ %d ",s1->age);

   return 0;
}

void display(struct student *s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s->name);
   printf("Age: %d", s->age);
   s->age = 99;
}

// Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.

union Job {
   float salary;
   int workerNo;
} j;

int main_3() {
   j.salary = 12.3;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   j.workerNo = 100;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}