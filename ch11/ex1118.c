#include <stdio.h>
#include <stdlib.h>

int main() {
   const int range = 21;
   int r, a, b;

   puts("100 random Numbers");
   for (a = 0; a < 20; a++) {
      for (b = 0; b < 5; b++) {
         r = rand() % range;
         printf("%d\t", r);
      }
      putchar('\n');
   }

   return 0;
}
