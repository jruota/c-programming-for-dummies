#include <stdio.h>

int main() {
   const char *sample = "From whence cometh my help!\n";
   char *p;

   puts(sample);
   printf("address -> %p\n", sample);

   putchar('\n');

   p = sample;
   while (*p != '\0') {
      putchar(*p);
      p++;
   }

   return 0;
}
