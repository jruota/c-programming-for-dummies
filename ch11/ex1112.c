#include <math.h>
#include <stdio.h>

int main() {
   int i;

   for (i = 0; i <= 10; i++) {
      printf("2 to the power of %2d is equal to %4.0f\n", i, pow(2, i));
   }
   putchar('\n');

   return 0;
}
