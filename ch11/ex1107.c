#include <stdio.h>

int main() {
   const int value = 5;
   int a;

   printf("Modulus %d:\n", value);
   for (a = 0; a < 30; a++) {
      printf("%2d %% %d = %d\n", a, value, a % value);
   }

   return 0;
}
