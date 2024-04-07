#include <stdio.h>

int main() {
   int code;
   int assn_sccss;

   printf("Enter the error code (A, B or C): ");
   // code = getchar();
   code = getc(stdin);
   /* The return value of 'scanf' is normally the number of successful
   assignments. */
   assn_sccss = printf("You entered: '%d'.\n", code);
   printf("DEBUG: assn_sccss -> %d\n", assn_sccss);

   switch (code) {
      case 'A':
         puts("Drive Fault, not your fault.");
         break;
      case 'B':
         puts("Illegal format, call a lawyer.");
         break;
      case 'C':
         puts("Bad filename, spank it.");
         break;
      default:
         puts("That's not A, B or C.");
   }

   return 0;
}
