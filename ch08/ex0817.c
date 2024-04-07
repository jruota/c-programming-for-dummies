#include <stdio.h>

int main() {
   int code;
   int assn_sccss;

   printf("Enter the error code (1-3): ");
   scanf("%d", &code);
   /* The return value of 'scanf' is normally the number of successful
   assignments. */
   assn_sccss = printf("You entered: '%d'.\n", code);
   printf("DEBUG: assn_sccss -> %d\n", assn_sccss);
   printf("DEBUG: assn_sccss -> %c\n", assn_sccss);

   // NOTE: what is going on here?
   /*  if (assn_sccss == EOF || assn_sccss < 1) {
       puts("Something went wrong, aborting...");
       return 1;
    } */

   switch (code) {
      case 1:
         puts("Drive Fault, not your fault.");
         break;
      case 2:
         puts("Illegal format, call a lawyer.");
         break;
      case 3:
         puts("Bad filename, spank it.");
         break;
      default:
         puts("That's not 1, 2 or 3.");
   }

   return 0;
}
