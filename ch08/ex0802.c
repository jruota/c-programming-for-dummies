#include <stdio.h>

int main() {
   int a, b;

   a = 6;
   b = a + 2;

   /* There is no output here, since a is not greater than b. */
   if (a > b) {
      printf("%d is greater than %d\n", a, b);
   }

   return 0;
}
