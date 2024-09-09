#include <stdio.h>
#include <stdlib.h>

void second(void);

int count;

int main() {
   for (count = 0; count < 25; count++) {
      second();
   }

   return 0;
}
