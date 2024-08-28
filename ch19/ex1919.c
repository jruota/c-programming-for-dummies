#include <stdio.h>

int main() {
   char *fruit[] = {"watermelon", "banana", "pear",     "apple",
                    "coconut",    "grape",  "blueberry"};
   char **p = fruit;
   int x;

   printf("'fruit'\t-> %p\n", fruit);
   printf("'p'\t-> %p\n", p);

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   putchar('\n');
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   for (x = 0; x < 7; x++) {
      printf("%d\t", x);
      printf("(fruit+%d) -> %p\t", x, (fruit + x));
      printf("fruit[%d] -> %p\t", x, fruit[x]);
      printf("*fruit[%d] -> %c\n", x, *fruit[x]);
   }

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   putchar('\n');
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   puts("--- DEBUG: starting loop(s) ---");

   printf("\n\tp\t-> %p\n", p);
   printf("\t*p\t-> %p\n", *p);
   printf("\t**p\t-> %c\n", **p);
   putchar('\n');

   /*
   ~~~ WARNING* ~~~
      This tries to change tha value of a character (that is part of a string).
      This character sits in a part of memory the program does not have access
      to, resulting in a 'Segmentation fault' error.

   ~~~ WARNING** ~~~
      This only works wor the cases when the strings are arranged one after the
      other in memory. The variable 'x' is never used to move the pointer 'p' to
      the beginning of the next string, thus this relies on moving the '(*p)'
      pointer by one unit and this only works when the strings are arranged one
      after the other in memory.
    */

   for (x = 0; x < 7; x++) {
      // while (putchar((*(*p))++)) {  // WARNING* !!! #########################
      // while (putchar(*(*p)++)) {  // WARNING** !!! ##########################
      /* printf("\n\tp\t-> %p\n", p);
         printf("\t*p\t-> %p\n", *p);
         printf("\t**p\t-> %c\n", **p);} */
      while (putchar(*(*(fruit + x))++)) {  // see COMPREHENSIVE VERSION
         printf("\n\t(fruit+x)\t-> %p\n", (fruit + x));
         printf("\t*(fruit+x)\t-> %p\n", *(fruit + x));
         printf("\t**(fruit+x)\t-> %c\n", **(fruit + x));
      }
      putchar('\n');
      puts("\t--- DEBUG: end of string ---");
      putchar('\n');
   }

   puts("--- DEBUG: looping over ---");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   putchar('\n');
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   printf("'fruit'\t-> %p\n", fruit);
   printf("'p'\t-> %p\n", p);

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   putchar('\n');
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   // COMPREHENSIVE VERSION ####################################################
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   puts("--- DEBUG: start of comprehensive version ---");

   putc('\n', stdout);

   char *ptr;
   for (x = 0; x < 7; x++) {
      ptr = *(fruit + x);
      while (putchar(*ptr)) {
         ptr++;
      }
      putchar('\n');
   }

   puts("--- DEBUG: end of comprehensive version ---");

   putchar('\n');

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   // SLIGHTLY LESS COMPREHENSIVE VERSION ######################################
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   puts("--- DEBUG: start of slightly less comprehensive version ---");

   putc('\n', stdout);

   for (x = 0; x < 7; x++) {
      ptr = *(fruit + x);
      while (putchar(*ptr++)) {
         ;
      }
      putchar('\n');
   }

   puts("--- DEBUG: end of slightly less comprehensive version ---");

   putchar('\n');

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   // LEAST COMPREHENSIVE VERSION ##############################################
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   puts("--- DEBUG: start of least comprehensive version ---");

   putc('\n', stdout);

   for (x = 0; x < 7; x++) {
      while (putchar(*(*(fruit + x))++)) {
         ;
      }
      putchar('\n');
   }

   puts("--- DEBUG: end of least comprehensive version ---");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   putchar('\n');
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   for (x = 0; x < 7; x++) {
      printf("%d\t", x);
      printf("(fruit+%d) -> %p\t", x, (fruit + x));
      printf("fruit[%d] -> %p\t", x, fruit[x]);
      printf("*fruit[%d] -> %c\n", x, *fruit[x]);
   }

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   putchar('\n');
   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   return 0;
}
