#include <stdio.h>

int main() {
   char alpha;

   for (alpha = 'z'; alpha >= 'a'; alpha = alpha - 1) {
      printf("%-2c", alpha);
   }
   putchar('\n');

   return 0;
}
