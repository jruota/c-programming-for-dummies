#include <stdio.h>

int main() {
   int duo;

   for (duo = 2; duo <= 100; duo = duo + 2) {
      printf("%3d\t", duo);
   }

   putchar('\n');

   return 0;
}
