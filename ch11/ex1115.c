#include <math.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main() {
   const float amplitude = 70;
   const float wavelength = 0.1;
   float graph, s, x;

   for (graph = 0; graph < M_PI; graph += wavelength) {
      s = sin(graph);
      for (x = 0; x < s * amplitude; x++) {
         putchar('*');
      }
      putchar('\n');
   }

   return 0;
}
