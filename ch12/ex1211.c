#include <stdio.h>

int main() {
   char firstname[16], lastname[16];

   printf("What is your first name? ");
   scanf("%s", firstname);
   printf("What is your last name? ");
   scanf("%s", lastname);
   printf("Pleased to meet you, %s %s\n", firstname, lastname);

   return 0;
}
