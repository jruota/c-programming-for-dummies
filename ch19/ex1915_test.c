#include <stdio.h>

int main() {
   char *sample = "From whence cometh my help!\n";

   char *p = sample;

   puts(sample);
   puts(p);
   while (putchar(*p++));

   return 0;
}
