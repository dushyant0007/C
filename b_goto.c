#include <stdio.h>

int main() {

   for (int i = 0; i <= 10; i++) {
    
      if (i>6) {
         goto jump;
      }
      else printf("%d ",i);
   }
   
   
jump:
   printf("\n");
   printf("Sum \n");
   printf("Average");


   return 0;
}