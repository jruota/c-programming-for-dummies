#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double celsius_to_kelvin(double);
double fahrenheit_to_kelvin(double);

int main(void) {
   char *scale = (char *)malloc(sizeof(char) * 11);
   double *temp = (double *)malloc(sizeof(double));
   double *temp_kelvin = (double *)malloc(sizeof(double));
   char *test;  // for debugging purposes only
   int c;

   if (scale == NULL || temp == NULL || temp_kelvin == NULL) {
      puts("ERROR: something went wrong.");
      puts("Aborting program.");
      exit(1);
   }

   printf("What is the current temperature outside? ");
   scanf("%lf", temp);

   // flush the newline character from the input buffer
   // https://stackoverflow.com/questions/7898215/how-can-i-clear-an-input-buffer-in-c
   while (c = getchar() != '\n' && c != EOF) {
      ;
   }

   printf("Is it °Celsius or °Fahrenheit [C/F]? ");
   scanf("%s", scale);

   test = scale;
   while (putchar(*test++) != '\0') {
      ;
   }
   putchar('\n');

   // first character to uppercase
   *scale = toupper(*scale);

   test = scale;
   while (putchar(*test++) != '\0') {
      ;
   }
   putchar('\n');

   /*
   The lowercase cases are not necessary here, because the first letter has been
   changed to uppercase.
   */
   if (!strcmp(scale, "celsius") || !strcmp(scale, "Celsius") ||
       !strcmp(scale, "c") || !strcmp(scale, "C")) {
      *temp_kelvin = celsius_to_kelvin(*temp);
   } else if (!strcmp(scale, "fahrenheit") || !strcmp(scale, "Fahrenheit") ||
              !strcmp(scale, "f") || !strcmp(scale, "F")) {
      *temp_kelvin = fahrenheit_to_kelvin(*temp);
   } else {
      puts("Unknown temperature scale.");
      return 0;
   }

   printf("The current temperature (%.2f °%s) ", *temp, scale);
   printf("is %.2f °Kelvin.\n", *temp_kelvin);

   return 0;
}

double celsius_to_kelvin(double c) { return (c + 273.15); }

double fahrenheit_to_kelvin(double f) { return ((f + 459.67) * (5.0 / 9.0)); }
