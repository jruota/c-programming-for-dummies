/* Fill an int array with values 1 through 10, and then
display the array’s elements and their values. */

#include <stdio.h>

int main() {
   int array[10];
   int i;
   int *p = array;

   /* initializing array */
   for (i = 0; i < 10; i++) {
      *p = i + 1;
      p++;
   }

   /* displaying array */
   p = array;
   for (i = 0; i < 10; i++) {
      printf("array[%d] ", i);
      printf("at address %p ", p);
      printf("has value %2d\n", *p);
      p++;
   }

   return 0;
}
