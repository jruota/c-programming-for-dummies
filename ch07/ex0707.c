#include <stdio.h>

int main() {
   char a, b, c, d;

   a = 'W';
   b = a + 24;
   c = b + 8;
   d = '\n';
   printf("ASCII code value of newline character -> %d\n", d);
   printf("%c%c%c%c", a, b, c, d);

   return 0;
}
