#include <stdio.h>

int main() {
   char alpha = 'A';
   int x;
   char *pa;

   pa = &alpha;

   for (x = 0; x < 26; x++) {
      putchar((*pa)++); /* (*pa)++ ^= *pa += 1 */
   }
   putchar('\n');

   return 0;
}
