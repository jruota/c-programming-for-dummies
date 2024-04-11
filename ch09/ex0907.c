#include <stdio.h>

int main() {
   int count;

   for (count = 25; count >= 0; count = count - 1) {
      printf("%2d\t", count);
   }

   putc('\n', stdout);

   return 0;
}
