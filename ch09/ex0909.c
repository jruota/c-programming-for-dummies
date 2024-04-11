#include <stdio.h>

int main() {
   char alphabet;

   for (alphabet = 'A'; alphabet <= 'Z'; alphabet = alphabet + 1) {
      printf("%-3d", alphabet);  // '-' -> left-align
   }
   putc('\n', stdout);

   return 0;
}
