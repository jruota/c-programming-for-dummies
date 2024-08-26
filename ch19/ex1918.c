#include <stdio.h>

int main() {
   char *fruit[] = {"watermelon", "banana", "pear",     "apple",
                    "coconut",    "grape",  "blueberry"};
   int x;

   for (x = 0; x < 7; x++) {
      putchar(**(fruit + x));
      putchar('\n');
   }

   // testing FIGURE 19-2
   int i;
   for (i = 0; i < 7; i++) {
      printf("*fruit[%d] -> %c\n", i, *fruit[i]);
   }

   return 0;
}
