#include <stdio.h>
#include <string.h>

int main() {
   char string[] = "Does this string make me look fat?";

   printf("The string \"%s\" has a size of %lu and a length of %lu.\n", string,
          sizeof(string), strlen(string));

   return 0;
}
