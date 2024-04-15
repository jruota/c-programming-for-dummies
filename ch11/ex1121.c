#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   const int tries = 7;

   int guess;
   int i;

   srand((unsigned)time(NULL));
   const int secret = rand() % 101;

   puts("A random number between 0 and 100 (inclusive) has been generated.");
   printf("Can you guess it? You have %d tries.\n", tries);

   for (i = 0; i < tries; i++) {
      printf("Can you guess the secret number: ");
      scanf("%d", &guess);
      if (guess == secret) {
         puts("You guessed it!");
         return 0;
      }
      if (guess != secret) {
         if (guess < secret) {
            puts("Wrong! Your guess is too low.");
         } else {
            puts("Wrong! Your guess is too high.");
         }
      }
   }

   printf("The secret number was %d.\n", secret);

   return 1;
}
