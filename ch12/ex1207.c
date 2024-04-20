#include <math.h>
#include <stdio.h>

int main() {
   int i;

   int first[] = {10, 12, 14, 15, 16, 18, 20};
   float second[7];

   for (i = 0; i < 7; i++) {
      second[i] = sqrt(first[i]);
   }

   for (i = 0; i < 7; i++) {
      printf("The square root of %d is %.2f.\n", first[i], second[i]);
   }

   return 0;
}
