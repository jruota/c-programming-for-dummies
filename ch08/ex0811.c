#include <stdio.h>

int main() {
   int a, b;

   a = 6;

   printf("Please insert an integer: ");
   scanf("%d", &b);

   if (a > b) {
      printf("%d is greater than %d\n", a, b);
   } else {
      printf("%d is not greater than %d\n", a, b);
   }

   return 0;
}
