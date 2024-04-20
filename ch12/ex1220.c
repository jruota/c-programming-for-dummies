#include <stdio.h>

int main() {
   int const size = 6;
   // char caesar[size][9] = {"Julius", "Augustus", "Nero"};
   char caesar[6][9] = {"Julius",   "Augustus", "Nero",
                        "Tiberius", "Caligula", "Claudius"};
   int x, index;

   for (x = 0; x < size; x++) {
      puts(caesar[x]);
   }

   return 0;
}
