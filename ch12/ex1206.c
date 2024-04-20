#include <stdio.h>

int main() {
   int i;
   float marketclose[] = {24164.95, 24107.08, 24643.63, 24400.93, 23728.53};

   puts("Stock Market Close");
   for (i = 0; i < 5; i++) {
      printf("Day %d: %.2f\n", i + 1, marketclose[i]);
   }

   return 0;
}
