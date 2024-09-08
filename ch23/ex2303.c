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
      printf("%-14s %5ld %s", file->d_name, filestat.st_size,
             ctime(&filestat.st_mtime));
   }
   closedir(dh);

   return 0;
}
