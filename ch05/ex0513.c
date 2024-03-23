#include <stdio.h>

int main() {
   printf("%d/%d=%.1f\n", 2, 5, 2.0 / 5);
   printf("%d/%d=%.1f\n", 2, 5, 2 / 5.0);
   printf("%d/%d=%.1f\n", 2, 5, 2.0 / 5.0);
   return 0;
}
