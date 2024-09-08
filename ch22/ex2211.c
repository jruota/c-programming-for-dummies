#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
   FILE* fh;
   char filename[256];
   int c, x;

   if (argc > 1) {
      strcpy(filename, argv[1]);
   } else {
      printf("File to dump: ");
      scanf("%s", filename);
   }

   fh = fopen(filename, "r");
   if (!fh) {
      printf("Unable to open '%s'\n", filename);
      exit(1);
   }

   x = 0;
   while ((c = fgetc(fh)) != EOF) {
      printf("%02X ", c);
      x++;
      if (!(x % 16)) {
         putchar('\n');
      }
   }
   putchar('\n');

   fclose(fh);

   return 0;
}
