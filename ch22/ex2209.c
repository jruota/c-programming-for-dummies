#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *fh;
   int array[5];
   int x;

   fh = fopen("scores.dat", "r");
   if (fh == NULL) {
      puts("File error!");
      exit(1);
   }
   fread(array, sizeof(int), 5, fh);
   fclose(fh);
   for (x = 0; x < 5; x++) {
      printf("Score #%d: %d\n", x + 1, array[x]);
   }

   return 0;
}
