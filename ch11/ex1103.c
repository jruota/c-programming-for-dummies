#include <stdio.h>

int main() {
   int i;

   for (i = -5; i < 5; i++) {
      printf("%2d ", i);
   }

   for (; i >= -5; i--) {
      printf("%2d ", i);
   }
   putchar('\n');

   return 0;
}
