#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int num;
   int *p_to_num = &num;

   srand(time(0));
   num = rand();

   printf("Variable %s has been set to the value %d.\n", "num", num);

   printf("The value in variable %s is %d.\n", "num", *p_to_num);

   return 0;
}
