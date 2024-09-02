#include <stdio.h>
#include <stdlib.h>

int main() {
   char *input;
   const size_t buffer_size = sizeof(char) * 1024;  // 1 kB (Kilobyte)

   /* allocate memory */
   input = (char *)malloc(buffer_size);
   if (input == NULL) {
      puts("Unable to allocate buffer! Oh no!");
      exit(1);
   }

   // ##########################################################################
   puts("--- DEBUG: start ---");
   printf("A total of %zd (0x%zx) memory units (bytes) has been allocated.\n",
          buffer_size, buffer_size);
   puts("--- DEBUG: end ---");
   // ##########################################################################

   /* use the memory */
   puts("Type something long and boring:");
   fgets(input, buffer_size, stdin);
   puts("You wrote:");
   printf("\"%s\"\n", input);

   return 0;
}
