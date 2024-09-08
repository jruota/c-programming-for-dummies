#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   FILE *jbdb;
   struct agent {
      char actor[32];
      int year;
      char title[32];
   };
   struct agent bond;

   strcpy(bond.actor, "Sean Connery");
   bond.year = 1962;
   strcpy(bond.title, "Dr. No");

   jbdb = fopen("bond.db", "w");
   if (jbdb == NULL) {
      puts("SPECTRE wins!");
      exit(1);
   }

   fwrite(&bond, sizeof(struct agent), 1, jbdb);
   fclose(jbdb);

   puts("Record written");

   return 0;
}
