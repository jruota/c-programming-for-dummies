#include <stdio.h>

int main() {
   struct robot {
      int alive;
      char name[5];
      int xpos;
      int ypos;
      int strength;
   };

   struct robot mr_roboto;

   mr_roboto.alive = 0;
   mr_roboto.name[0] = 'm';
   mr_roboto.name[1] = 'r';
   mr_roboto.name[2] = '_';
   mr_roboto.name[3] = 'r';
   mr_roboto.name[4] = '\0';
   mr_roboto.xpos = 1;
   mr_roboto.ypos = 1;
   mr_roboto.strength = 100;

   /* Do NOT do this */
   printf("The evil robot struct size is %lu\n", sizeof(mr_roboto));
   /* Instead do it like this */
   printf("The evil robot struct size is %lu\n", sizeof(struct robot));

   return 0;
}
