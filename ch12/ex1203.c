#include <stdio.h>

int main() {
   int highscores[4];

   printf("Your highest score: ");
   scanf("%d", &highscores[0]);

   printf("Your second highest score: ");
   scanf("%d", &highscores[1]);

   printf("Your third highest score: ");
   scanf("%d", &highscores[2]);

   printf("Your highest score: ");
   scanf("%d", &highscores[3]);

   puts("Here are your high scores");
   printf("#1 %d\n", highscores[0]);
   printf("#2 %d\n", highscores[1]);
   printf("#3 %d\n", highscores[2]);
   printf("#4 %d\n", highscores[3]);

   return 0;
}
