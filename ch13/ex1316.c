#include <stdio.h>

int main() {
   int i;

   do {
      i = getchar();
      putchar(i);
   } while (i != '.');
   putc('\n', stdout);

   return 0;
}
