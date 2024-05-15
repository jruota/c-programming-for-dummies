#include <stdio.h>

int main() {
   int age;
   float weight; /* in kilograms */

   int *p_to_age = &age;
   float *p_to_weight = &weight;

   *p_to_age = 36;
   *p_to_weight = 74.3;

   printf("I am %d years old and weigh %.1f kilograms.\n", age, weight);

   return 0;
}
