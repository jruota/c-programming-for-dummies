#include <stdio.h>

int main() {
   int array[5] = {2, 3, 5, 7, 11};

   printf("'array' is at address %p\n", &array);
   printf("The first element of 'array' is at adress %p\n", &array[0]);

   return 0;
}
