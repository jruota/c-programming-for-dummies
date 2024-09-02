#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   float *temperature;
   int c;

   /* allocate memory */
   temperature = (float *)malloc(sizeof(float) * 1);
   if (temperature == NULL) {
      puts("Unable to allocate memory");
      exit(1);
   }

   /* prompt for input */
   printf("What is the temperature? ");
   scanf("%f", temperature);
   getchar(); /* swallow the newline */
   printf("Is this value (C)elsius or (F)ahrenheit? ");
   c = toupper(getchar());

   /* evaluate input */
   if (c == 'F') {
      printf("%.2f Fahrenheit is ", *temperature);
      *temperature = (*temperature + 459.67) * (5.0 / 9.0);
      printf("%.2f Kelvin\n", *temperature);
   } else if (c == 'C') {
      printf("%.2f Celsius is ", *temperature);
      *temperature += 273.15;
      printf("%.2f Kelvin\n", *temperature);
   } else {
      puts("Invalid response");
   }

   return 0;
}
