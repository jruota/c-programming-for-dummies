#include <stdio.h>

int main() {
   int count;

   for (count = 11; count <= 19; count = count + 1) {
      printf("%2d\t", count);
   }
   puts("");

   return 0;
}
