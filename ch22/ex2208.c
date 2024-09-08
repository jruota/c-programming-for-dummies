#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *fh;
   int array[] = {2, 3, 5, 7, 11};

   fh = fopen("scores.dat", "w");
   if (fh == NULL) {
      puts("File error");
      exit(1);
   }
   fwrite(array, sizeof(int), 5, fh);
   fclose(fh);
   puts("Scores saved");

   return 0;
}
