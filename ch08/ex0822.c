#include <stdio.h>

int main() {
   int a, b, larger;

   printf("Enter value A: ");
   scanf("%d", &a);
   printf("Enter different value B: ");
   scanf("%d", &b);

   if (a > b)
      larger = a;
   else
      larger = b;

   printf("Value %d is larger.\n", larger);
   return 0;
}
