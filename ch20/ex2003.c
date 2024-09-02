#include <stdio.h>
#include <stdlib.h>

int main(void) {
   const int size_of_int_array = 13;

   int i;
   int *int_array = malloc(sizeof(int) * size_of_int_array);
   // int *ptr;

   if (int_array == NULL) {
      puts("Memory allocation error.");
      puts("Aborting program.");
      exit(1);
   }

   /* assign values */
   /*    ptr = int_array;
      for (i = 0; i < size_of_int_array; i++) {
         *ptr++ = (i + 1) * 100;
      } */

   /* output values */
   /*  ptr = int_array;
    for (i = 0; i < size_of_int_array; i++) {
       printf("[%2d] %5d\n", i, *ptr++);
    } */

   /* assign values */
   for (i = 0; i < size_of_int_array; i++) {
      *(int_array + i) = (i + 1) * 100;
   }

   for (i = 0; i < size_of_int_array; i++) {
      printf("[%2d] %5d\n", i, *(int_array + i));
   }

   return 0;
}
