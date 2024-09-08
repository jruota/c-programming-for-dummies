#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *fh;

   /* open the file */
   fh = fopen("hello.txt", "w");
   /* check for errors */
   if (fh == NULL) {
      puts("Can't open that file!");
      exit(1);
   }
   /* output text */
   fprintf(fh, "Look what I made!\n");
   fputs("My C program wrote this file.\n", fh);
   /* close the file */
   fclose(fh);
   /* inform the user */
   puts("File written.");

   return 0;
}
