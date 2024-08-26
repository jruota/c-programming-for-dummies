#include <stdio.h>

int main() {
   int numbers[10];
   int x;
   int *pn;

   pn = numbers; /* initialize pointer */

   /* Fill array */
   for (x = 0; x < 10; x++) {
      *pn = x + 1;
      pn++;
   }

   pn = numbers;
   /* Display array */
   for (x = 0; x < 10; x++) {
      printf("numbers[%d] = %2d ", x, numbers[x]);
      printf("at address %p\n", pn);
      pn++;
   }

   return 0;
}
