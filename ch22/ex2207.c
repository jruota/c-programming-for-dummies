#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *handle;
   int highscore;

   handle = fopen("scores.dat", "w");
   if (!handle) {
      puts("File error!");
      exit(1);
   }
   printf("What is your highscore? ");
   scanf("%d", &highscore);
   fwrite(&highscore, sizeof(int), 1, handle);
   fclose(handle);
   puts("Score saved");

   return 0;
}
