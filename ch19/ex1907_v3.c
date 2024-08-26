#include <stdio.h>

int main() {
   int i;
   char letters[26];
   char *p = letters;

   for (i = 0; i < 26; i++) {
      *p = 'A' + i;
      p++;
   }

   p = letters;
   for (i = 0; i < 26; i++) {
      printf("Letter '%c' at address %p\n", *p, p);
      p++;
   }

   return 0;
}
