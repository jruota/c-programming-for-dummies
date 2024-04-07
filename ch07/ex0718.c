#include <stdio.h>

int main() {
   const int name_length = 15;
   char firstname[name_length];
   char lastname[name_length];

   printf("Type your first name: ");
   fgets(firstname, name_length, stdin);
   printf("Type your last name: ");
   fgets(lastname, name_length, stdin);
   printf("Pleased to meet you, %s %s.\n", firstname, lastname);

   return 0;
}
