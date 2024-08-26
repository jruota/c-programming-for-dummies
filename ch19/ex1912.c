#include <stdio.h>

int main() {
   char sample[] = "From whence cometh my help?\n";

   char *p = sample;

   while (*p != '\0') {
      putchar(*p);
      p++;
   }

   return 0;
}
