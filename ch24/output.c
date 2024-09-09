#include "ex2403.h"

extern human person;

void printstructure(void) {
   printf("You are %s\n", person.name);
   printf("And you are %d years old.\n", person.age);

   return;
}
