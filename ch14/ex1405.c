#include <stdio.h>

int main() {
   struct president {
      char name[40];
      int year;
   } first = {"George Washington", 1789}, second = {"John Adams", 1797};

   printf("The first president was %s\n", first.name);
   printf("He was inaugurated in %d\n", first.year);

   printf("The second president was %s\n", second.name);
   printf("He was inaugurated in %d\n", second.year);

   return 0;
}
