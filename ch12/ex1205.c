#include <stdio.h>

int main() {
   int highscores[10];
   int i;

   for (i = 0; i < 10; i++) {
      printf("Enter score #%2d: ", i + 1);
      scanf("%d", &highscores[i]);
   }

   puts("Here are your highscores:");
   for (i = 0; i < 10; i++) {
      printf("#%2d %d\n", i + 1, highscores[i]);
   }

   return 0;
}
