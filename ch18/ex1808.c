#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   const int max_val = 255;

   int i;
   int nums[5];

   srand(time(0));

   for (i = 0; i < 5; i++) {
      nums[i] = rand() % (max_val + 1);
   }

   for (i = 0; i < 5; i++) {
      printf("%3d at %p\n", nums[i], &nums[i]);
   }

   return 0;
}
