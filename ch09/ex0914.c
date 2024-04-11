#include <stdio.h>

int main() {
   int x;

   /* The starting condition for the while-loop is never met, which results in
      no output at all. */
   x = 13;
   while (x < 10) {
      puts("Sore shoulder surgery");
      x = x + 1;
   }

   return 0;
}
