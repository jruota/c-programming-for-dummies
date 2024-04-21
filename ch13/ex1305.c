#include <ctype.h>
#include <stdio.h>

int main() {
   char answer, answer_upper;

   printf("Would you like to blow up the moon? ");
   scanf("%c", &answer);
   answer_upper = toupper(answer);
   if (answer_upper == 'Y') {
      puts("BOOM!");
   } else {
      printf("You typed \"%c\"\n", answer);
      puts("The moon is safe");
   }

   return 0;
}
