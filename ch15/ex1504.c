#include <stdio.h>

int main(int argc, char *argv[]) {
   int i;

   printf("You typed %d arguments.\n", argc);
   puts("The arguments are:");
   for (i = 0; i < argc; i++) {
      printf("\tArg#%d:\t%s\n", i + 1, argv[i]);
   }

   return 0;
}
