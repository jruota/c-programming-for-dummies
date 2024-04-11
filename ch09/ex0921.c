#include <stdio.h>

int main() {
   int a;
   char c;

   for (a = 1, c = 'Z'; a < 5; a = a + 1, c = c - 1) {
      printf("%d%c\n", a, c);
   }

   return 0;
}
