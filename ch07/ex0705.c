#include <stdio.h>

int main() {
   int ch;
   int a;

   printf("Press Enter: ");
   a = getchar();
   printf("a -> %d\n", a);
   ch = 'H';
   a = putchar(ch);
   ch = 'i';
   putchar(ch);
   putchar('!');

   return 0;
}
