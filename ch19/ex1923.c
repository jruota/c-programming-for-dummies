#include <stdio.h>

void swap(int *, int *);

int main(void) {
   int a, b;

   a = 23, b = 47;
   printf("a -> %d\t\tb -> %d\n", a, b);
   puts("swapping values ...");
   swap(&a, &b);
   puts("values swapped ...");
   printf("a -> %d\t\tb -> %d\n", a, b);

   return 0;
}

void swap(int *x, int *y) {
   int temp = *x;

   *x = *y;
   *y = temp;

   return;
}
