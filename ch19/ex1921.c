#include <stdio.h>
#include <string.h>

void print_array(char **, int);

int main() {
   char *fruit[] = {"apricot",   "banana", "pineapple", "apple",
                    "persimmon", "pear",   "blueberry"};
   char *temp;
   int a, b, x;

   // ##########################################################################

   puts("--- DEBUG: start ---");
   putchar('\n');

   for (int i = 0; i < 7; i++) {
      printf("'*(fruit+%d)' -> %p\t\t", i, *(fruit + i));
      printf("'**(fruit+%d)' -> %c\t", i, **(fruit + i));
      puts(*(fruit + i));
   }
   putchar('\n');

   puts("--- DEBUG: end ---");
   putchar('\n');

   // ##########################################################################

   for (a = 0; a < 6; a++) {
      for (b = a + 1; b < 7; b++) {
         if (strcmp(*(fruit + a), *(fruit + b)) > 0) {
            temp = *(fruit + a);
            *(fruit + a) = *(fruit + b);
            *(fruit + b) = temp;

            // #################################################################

            putchar('\n');
            puts("\t--- DEBUG: start ---");
            putchar('\n');

            for (int i = 0; i < 7; i++) {
               printf("\t'*(fruit+%d)' -> %p\t\t", i, *(fruit + i));
               printf("'**(fruit+%d)' -> %c\t", i, **(fruit + i));
               puts(*(fruit + i));
            }
            putchar('\n');

            puts("\t--- DEBUG: end ---");
            putchar('\n');

            // #################################################################
         }
      }
   }

   for (x = 0; x < 7; x++) {
      puts(fruit[x]);
   }

   // ##########################################################################

   putchar('\n');
   puts("--- DEBUG: start ---");
   putchar('\n');

   for (int i = 0; i < 7; i++) {
      printf("'*(fruit+%d)' -> %p\t\t", i, *(fruit + i));
      printf("'**(fruit+%d)' -> %c\t", i, **(fruit + i));
      puts(*(fruit + i));
   }
   putchar('\n');

   puts("--- DEBUG: end ---");
   putchar('\n');

   // ##########################################################################

   return 0;
}

void print_array(char **array, int length) {
   for (int i = 0; i < length; i++) {
      puts(*(array + i));
   }

   return;
}
