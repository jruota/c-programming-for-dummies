#include <stdio.h>

int main() {
   const int secret = 17;
   int guess;

   printf("Can you guess the secret number: ");
   scanf("%d", &guess);

   /* The return value of 'scanf' is normally the number of successful
   assignments. */
   printf("Your guess is %d.\n", guess);

   if (guess == secret) {
      puts("You guessed it!");
      return 0;
   } else {
      puts("Wrong!");
      return 1;
   }
}
