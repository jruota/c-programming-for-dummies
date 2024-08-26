#include <stdio.h>

int main() {
   char array[26];
   char *p = array;
   int x;

   /* initializing array */
   for (x = 0; x < 26; x++) {
      *p = x + 'A';
      ++p;
   }

   /* displaying the array */
   p = array;
   for (x = 0; x < 26; x++) {
      printf("array[%2d] ", x);
      printf("at address %p ", p);
      printf("has value %c\n", *p);
      p++;
   }

   return 0;
}
