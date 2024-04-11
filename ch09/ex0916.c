#include <stdio.h>

int main() {
   int fibo, nacci;

   fibo = 0;
   nacci = 1;

   do {
      printf("%d ", fibo);
      printf("%d ", nacci);
      fibo = fibo + nacci;
      nacci = nacci + fibo;
   } while (nacci < 300);

   putchar('\n');

   return 0;
}
