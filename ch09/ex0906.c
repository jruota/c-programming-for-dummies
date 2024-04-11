#include <stdio.h>

int main() {
   int trio;

   for (trio = 3; trio <= 100; trio = trio + 3) {
      printf("%3d\t", trio);
   }

   putchar('\n');

   return 0;
}
