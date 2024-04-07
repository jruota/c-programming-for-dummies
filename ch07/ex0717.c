#include <stdio.h>

int main() {
   const int name_length = 3;
   char name[name_length];

   printf("Who are you? ");
   fgets(name, name_length, stdin);
   printf("Glad to meet you, %s.\n", name);

   return 0;
}
