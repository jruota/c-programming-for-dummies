#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   const int max_length = 40;

   int i, inner, outer, temp;
   int randnums[40];

   srand(time(0));
   for (i = 0; i < max_length; i++) {
      randnums[i] = (rand() % 100) + 1;
   }

   puts("Original array:");
   for (i = 0; i < max_length; i++) {
      printf("%3d\t", randnums[i]);
   }
   putc('\n', stdout);

   puts("Sorting array ...");
   for (inner = 0; inner < max_length - 1; inner++) {
      for (outer = inner + 1; outer < max_length; outer++) {
         if (randnums[inner] < randnums[outer]) {
            temp = randnums[outer];
            randnums[outer] = randnums[inner];
            randnums[inner] = temp;
         }
      }
   }

   puts("Sorted array: ");
   for (i = 0; i < max_length; i++) {
      printf("%3d\t", randnums[i]);
   }
   putchar('\n');

   return 0;
}
