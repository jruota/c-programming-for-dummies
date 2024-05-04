#include <stdio.h>

int main() {
   char input[64];
   int ch;
   int x = 0;

   printf("Type in some text: ");
   fgets(input, 63, stdin);

   while (input[x] != '\n') {
      if (input[x] > 60 && input[x] < 173) {
         ch = input[x] & 223;
      } else {
         ch = input[x];
      }
      putchar(ch);
      x++;
   }
   putchar('\n');

   return 0;
}
