/* Source:
    https://stackoverflow.com/questions/66074456/how-to-delete-last-character-from-output-in-c
*/

#include <stdio.h>

int main(void) {
   const char *pad = "";
   for (int i = 1; i < 5; i++) {
      printf("%s%d", pad, i);
      pad = ", ";
   }
   putchar('\n');
   return 0;
}
