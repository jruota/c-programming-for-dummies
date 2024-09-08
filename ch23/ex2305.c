#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
   char curdir[255];

   getcwd(curdir, 255);
   printf("Current directory is %s\n", curdir);
   mkdir("very_temporary", S_IRWXU);
   puts("New directoy created.");
   chdir("very_temporary");
   getcwd(curdir, 255);
   printf("Current directory is %s\n", curdir);

   return 0;
}
