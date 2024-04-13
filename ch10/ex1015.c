#include <stdio.h>

#define TRUE 1
#define FALSE 0

void limit(int stop);
int verify(int val);

int main() {
   int s;

   printf("Enter a stopping value (0-100): ");
   scanf("%d", &s);
   if (!verify(s)) {
      printf("ERROR: value '%d' is out of range\n", s);
      return 1;
   }
   limit(s);
   return 0;
}

void limit(int stop) {
   int x;

   for (x = 0; x <= 100; x = x + 1) {
      printf("%d ", x);
      if (x == stop) {
         puts("You won!");
         return;
      }
   }
   puts("I won!");

   return;
}

int verify(int val) {
   if (0 <= val && val <= 100)
      return TRUE;
   else
      return FALSE;
}
