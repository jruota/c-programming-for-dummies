#include <stdio.h>

int main() {
   int array[10];
   int i;

   for (i = 0; i < 10; i++) {
      printf("at address %p\n", array + i);
      *(array + i) = i + 1;
   }
   putc('\n', stdout);

   for (i = 0; i < 10; i++) {
      printf("Element %2d ", i + 1);
      /* printf("at address %p ", &array[i]);
      printf("has value %2d.\n", array[i]); */
      printf("at address %p ", array + i);
      printf("has value %2d.\n", *(array + i));
   }
   putchar('\n');

   printf("The array has a size of %zd.\n", sizeof(array));

   return 0;
}
