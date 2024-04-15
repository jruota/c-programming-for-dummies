#include <stdio.h>

int main() {
   const float deg_per_rad = 180 / 3.14;

   float radians;

   printf("Enter an angle in radians: ");
   scanf("%f", &radians);
   printf("%.1f radians is %.1f degrees\n", radians, radians * deg_per_rad);

   return 0;
}
