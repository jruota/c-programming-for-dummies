#include <stdio.h>

int main() {
   char array[26];
   char *pn = array;

   int x;

   for (x = 0; x < 26; x++) {
      *(pn++) = x + 'A';
      /* // See comments on webpage
      // https://c-for-dummies.com/cprog/exercises/ex1908.php
      *++pn = x + 'A'; */
   }

   pn = array;
   for (x = 0; x < 26; x++) {
      printf("array[%2d] ", x);
      printf("at address %p ", pn);
      printf("has value %c\n", *pn);
      pn++;
   }

   return 0;
}
