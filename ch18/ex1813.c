#include <stdio.h>

int main() {
   char a, b, c;
   char *p;

   p = &a;   /* initialize */
   *p = 'A'; /* assign */
   p = &b;   /* initialize */
   *p = 'B'; /* assign */
   p = &c;   /* initialize */
   *p = 'C'; /* assign */

   printf("Know your %c%c%cs\n", a, b, c);

   return 0;
}
