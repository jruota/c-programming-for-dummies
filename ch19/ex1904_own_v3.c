#include <stdio.h>

int main() {
   int array[10];
   int i;
   int *p = array;

   for (i = 0; i < 10; i++) {
      *p = i + 1;
      p++;
   }

   p = array;
   for (i = 0; i < 10; i++) {
      printf("%2d ", *p);
      p++;
   }
   putchar('\n');

   return 0;
}
