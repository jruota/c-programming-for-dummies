#include <stdio.h>
#include <stdlib.h>

int main(void) {
   const int no_of_characters = 1024;
   const size_t buffer_size = sizeof(char) * no_of_characters;
   char *input = malloc(buffer_size);
   char *copy = malloc(buffer_size);
   char *input_ptr, *copy_ptr;

   if (input == NULL || copy == NULL) {
      puts("Memory allocation error.");
      puts("Aborting program.");
      exit(1);
   }

   puts("Type something long and boring:");
   fgets(input, no_of_characters, stdin);

   copy_ptr = copy;
   input_ptr = input;
   /*
   This is too much, because 'fgets' reads up to (and including) the first
   newline character. Therefore the while clause can check for '\n' and exit,
   and then this newline can be replaced by the null ('\0') character.
   */
   while (*input_ptr != '\0') {
      if (*input_ptr == '\n' && *(input_ptr + 1) == '\0') {
         input_ptr++;  // skip last newline
      } else {
         *copy_ptr = *input_ptr;
         copy_ptr++;
         input_ptr++;
      }
   }
   *copy_ptr = *input_ptr;  // copy null character ('\0')

   puts("You wrote:");
   printf("\"%s\"\n", copy);

   return 0;
}
