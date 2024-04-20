#include <stdio.h>

void arrayinc(int array[]);
void showarray(int array[]);

int main() {
   int n[] = {2, 3, 5, 7, 11};

   puts("Here's your array:");
   showarray(n);

   arrayinc(n);

   puts("Here's your incremented array:");
   showarray(n);

   return 0;
}

void arrayinc(int array[]) {
   int i;

   for (i = 0; i < 5; i++) {
      array[i] += 1;
   }
}

void showarray(int array[]) {
   int x;

   for (x = 0; x < 5; x++) {
      printf("%d ", array[x]);
   }
   putchar('\n');
}
