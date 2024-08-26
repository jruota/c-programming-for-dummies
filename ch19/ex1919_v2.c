#include <stdio.h>

int main() {
   char *fruit[] = {"watermelon", "banana", "pear",     "apple",
                    "coconut",    "grape",  "blueberry"};
   char **p = fruit;
   int i, x;

   puts("\n--- DEBUG: 'where is the inner pointer tracked' start");
   for (i = 0; i < 7; i++) {
      printf("%d\t", i);
      printf("(fruit+%d) -> %p\t", i, (fruit + i));
      printf("fruit[%d] -> %p\t", i, fruit[i]);
      printf("*fruit[%d] -> %c\n", i, *fruit[i]);
   }
   puts("--- DEBUG: 'where is the inner pointer tracked' end");

   for (x = 0; x < 7; x++) {
      while (putchar(*(*(fruit + x))++)) {
         puts("\n--- DEBUG: 'where is the inner pointer tracked' start");
         for (i = 0; i < 7; i++) {
            printf("%d\t", i);
            printf("(fruit+%d) -> %p\t", i, (fruit + i));
            printf("fruit[%d] -> %p\t", i, fruit[i]);
            printf("*fruit[%d] -> %c\n", i, *fruit[i]);
         }
         puts("--- DEBUG: 'where is the inner pointer tracked' end");
      }
      putchar('\n');
   }

   return 0;
}
