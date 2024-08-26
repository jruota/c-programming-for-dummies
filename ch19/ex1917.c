#include <stdio.h>

int main() {
   char *fruit[] = {"watermelon", "banana", "pear",     "apple",
                    "coconut",    "grape",  "blueberry"};
   char **p = fruit;
   int x;

   for (x = 0; x < 7; x++) {
      /* from https://c-for-dummies.com/cprog/exercises/ex1917.php

         The following works because the fruit array contains pointers. Each
         element is a memory location, specifically the address of a string. So
         fruit+0 is the first element in the array, and *(fruit+0) is the
         address of a string. Therefore this variable can be used to represent a
         string anywhere in the code as a string.
      */
      // puts takes a char pointer (a string) as its argument
      puts(*(fruit + x));
      printf("address -> %p\n", fruit[x]);  // fruit[x] -> *(fruit + x)
   }
   puts("");

   /* ----------------------------------- */

   printf("The array '%s' has a total size of %zd.\n", "fruit", sizeof(fruit));
   printf("'%s' has a length of %zd.\n", "fruit",
          sizeof(fruit) / sizeof(char *));
   printf("It's base address is %p.\n", fruit);
   puts("It's elements are:");

   for (x = 0; x < 7; x++) {
      printf("%d)\t%p\t%p\n", x + 1, fruit + x, *(fruit + x));
   }
   puts("");

   /* ----------------------------------- */

   for (x = 0; x < 7; x++) {
      printf("%p\n", p);
      p++;
   }
   putc('\n', stdout);

   /* ----------------------------------- */

   p = fruit;

   for (x = 0; x < 7; x++) {
      printf("%p\n", *p);
      p++;
   }
   putc('\n', stdout);

   /* ----------------------------------- */

   p = fruit;

   for (x = 0; x < 7; x++) {
      printf("%c\n", **p);
      p++;
   }
   putchar('\n');

   /* ----------------------------------- */

   char *pp;
   p = fruit;

   for (x = 0; x < 7; x++) {
      pp = *p;
      while (putchar(*pp) != '\0') {
         pp++;
      }
      putchar('\n');
      p++;
   }
   putchar('\n');

   /* ----------------------------------- */

   p = fruit;

   for (x = 0; x < 7; x++) {
      puts(*p);
      p++;
   }
   putchar('\n');

   return 0;
}
