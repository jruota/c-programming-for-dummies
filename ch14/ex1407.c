#include <stdio.h>

int main() {
   struct scores {
      char name[32];
      int score;
   };

   struct scores player[4], temp;
   int inner, outer, x;

   for (x = 0; x < 4; x++) {
      printf("Enter player %d: ", x + 1);
      scanf("%s", player[x].name);
      printf("Enter their score: ");
      scanf("%d", &player[x].score);
   }

   for (outer = 0; outer < 3; outer++) {
      for (inner = outer + 1; inner < 4; inner++) {
         if (player[outer].score < player[inner].score) {
            temp = player[inner];
            player[inner] = player[outer];
            player[outer] = temp;
         }
      }
   }

   puts("Player Info");
   printf("%-3s\t%-32s\t%-7s\n", "#", "Name", "Score");
   for (x = 0; x < 4; x++) {
      printf("%3d\t%32s\t%7d\n", x + 1, player[x].name, player[x].score);
   }

   return 0;
}
