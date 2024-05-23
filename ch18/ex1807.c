#include <stdio.h>

int main() {
   char hello[] = "Hello!";
   int i = 0;

   printf("Array '%s' at %p\n", "hello", &hello);
   puts("");

   while (hello[i]) {
      printf("%c at %p\n", hello[i], &hello[i]);
      i++;
   }

   return 0;
}
