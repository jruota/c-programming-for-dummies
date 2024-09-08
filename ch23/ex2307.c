#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *original, *copy;
   int c;

   original = fopen("ex2307.c", "r");
   copy = fopen("ex2307.bak", "w");
   if (!original || !copy) {
      puts("File error!");
      exit(1);
   }
   while ((c = fgetc(original)) != EOF) {
      fputc(c, copy);
   }
   fclose(original);
   fclose(copy);
   puts("File duplicated");

   return 0;
}
