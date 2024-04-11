#include <stdio.h>

int main() {
   char alphabet;

   for (alphabet = 'A'; alphabet <= 'Z'; alphabet = alphabet + 1) {
      printf("%c", alphabet);
   }
   putc('\n', stdout);

   return 0;
}
