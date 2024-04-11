#include <stdio.h>

int main() {
   float x = -5;
   float increment = .5;

   while (x <= 5) {
      printf("%4.1f\t", x);
      x = x + increment;
   }
   puts("");

   return 0;
}
