#include <stdio.h>

int main() {
   int i = -10;

   while (i < 10) {
      printf("%3d ", i);
      i++;
   }

   while (i >= -10) {
      printf("%3d ", i);
      i--;
   }
   putc('\n', stdout);

   return 0;
}
