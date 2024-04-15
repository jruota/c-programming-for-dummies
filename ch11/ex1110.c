#include <stdio.h>

int main() {
   int i;

   for (i = 5; i <= 100; i += 5) {
      printf("%3d ", i);
   }
   putchar('\n');

   return 0;
}
