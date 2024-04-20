#include <stdio.h>

int main() {
   int const size = 3;
   // char caesar[size][9] = {"Julius", "Augustus", "Nero"};
   char caesar[3][9] = {"Julius", "Augustus", "Nero"};
   int x, index;

   for (x = 0; x < size; x++) {
      index = 0;
      while (caesar[x][index] != '\0') {
         putchar(caesar[x][index]);
         index++;
      }
      putchar('\n');
   }

   return 0;
}
