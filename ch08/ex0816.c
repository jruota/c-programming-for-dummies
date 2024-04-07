#include <stdio.h>

int main() {
   int answer;

   printf("Do you want to continue (Y/N)? ");
   answer = getchar();

   if (answer == 'Y' || answer == 'y') {
      puts("You DO want to continue.");
   } else if (answer == 'N' || answer == 'n') {
      puts("You DO NOT want to continue.");
   } else {
      printf(
          "Unknown input '%c'.\n"
          "So what is it that you want?\n",
          answer);
   }

   return 0;
}
