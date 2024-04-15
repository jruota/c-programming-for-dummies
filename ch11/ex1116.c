#include <math.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main() {
   const float amplitude = 70;
   const float wavelength = 0.1;
   float graph, s, x;

   for (graph = 0; graph <= 2 * M_PI; graph += wavelength) {
      s = sin(graph);

      if (s < 0) {
         for (x = -1 * amplitude; x < s * amplitude; x++) {
            putchar(' ');
         }

         for (; x <= 0; x++) {
            putchar('*');
         }
      } else {
         for (x = -1 * amplitude; x < 0; x++) {
            putchar(' ');
         }

         for (; x <= s * amplitude; x++) {
            putchar('*');
         }
      }

      putchar('\n');
   }

   return 0;
}
