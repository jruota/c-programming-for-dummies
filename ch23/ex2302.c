#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   DIR *folder;
   struct dirent *file;

   folder = opendir(".");
   if (folder == NULL) {
      puts("Unable to read directory");
      exit(1);
   }

   while ((file = readdir(folder)) != NULL) {
      if (file == NULL) {
         break;
      }
      printf("Found the file '%s'\n", file->d_name);
   }

   closedir(folder);

   return 0;
}
