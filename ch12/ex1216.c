#include <stdio.h>

int main() {
   char string[] = "C Programming is fun!";
   char temp;

   int i, inner, outer;

   puts("The characters of the string:");
   for (i = 0; i < 22; i++) {
      printf("'%c' ", string[i]);
   }
   putc('\n', stdout);

   puts("Sorting the characters...");
   for (inner = 0; inner < 21; inner++) {
      for (outer = inner + 1; outer < 22; outer++) {
         if (string[inner] > string[outer]) {
            temp = string[inner];
            string[inner] = string[outer];
            string[outer] = temp;
         }
      }
   }

   puts("The characters of the string sorted alphabetically:");
   for (i = 0; i < 22; i++) {
      printf("'%c' ", string[i]);
   }
   putchar('\n');

   return 0;
}
