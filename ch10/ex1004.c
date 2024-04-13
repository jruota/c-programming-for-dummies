#include <stdio.h>

/* Display prompt */

void prompt(void) {
   printf("C:\\DOS> ");
   return;
}

int main() {
   int loop;
   char input[32];

   loop = 0;
   while (loop < 5) {
      prompt();
      fgets(input, 32, stdin);
      loop = loop + 1;
   }

   return 0;
}
