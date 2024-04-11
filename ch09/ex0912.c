#include <stdio.h>

int main() {
   char alpha1, alpha2, alpha3;

   for (alpha1 = 'A'; alpha1 <= 'Z'; alpha1 = alpha1 + 1) {
      for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2 = alpha2 + 1) {
         for (alpha3 = 'A'; alpha3 <= 'Z'; alpha3 = alpha3 + 1) {
            // printf("%c%c%c\n", alpha1, alpha2, alpha3);
            printf("%c%c%c\t", alpha1, alpha2, alpha3);
         }
      }
   }
   putc('\n', stdout);

   return 0;
}
