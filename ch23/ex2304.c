#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main() {
   DIR *dh;
   struct dirent *file;
   struct stat filestat;

   dh = opendir(".");
   if (dh == NULL) {
      puts("Unable to read directory");
      exit(1);
   }

   while ((file = readdir(dh)) != NULL) {
      stat(file->d_name, &filestat);
      printf("%-14s ", file->d_name);

      if (S_ISDIR(filestat.st_mode)) {
         printf("%-5s ", "<DIR>");
      } else {
         printf("%5ld ", filestat.st_size);
      }

      printf("%s", ctime(&filestat.st_mtime));
   }

   closedir(dh);

   return 0;
}
