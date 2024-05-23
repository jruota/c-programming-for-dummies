#include <stdio.h>

int main() {
   int a = 10;

   printf("About variable %s:\n", "a");
   printf("Content\t\t%d\n", a);
   printf("Size\t\t%zd\n", sizeof(a));
   printf("Location\t%p\n", &a);

   putchar('\n');
   printf("Reassigning variable '%s'...\n", "a");
   putchar('\n');

   a = 555;

   printf("About variable %s:\n", "a");
   printf("Content\t\t%d\n", a);
   printf("Size\t\t%zd\n", sizeof(a));
   printf("Location\t%p\n", &a);
   putchar('\n');

   /* ----------------------------------------------------------------------- */

   int *ptr;
   int *ptr2 = NULL;
   void *ptr3;

   printf("Value at uninitialized pointer %p is %d.\n", ptr, *ptr);

   if (ptr2 != NULL) {
      printf("Value at NULL pointer %p is %d.\n", ptr2, *ptr2);
   } else {
      printf("Value at NULL pointer %p is '%s'.\n", ptr2, "NULL");
   }

   // The following will result in an error.
   // printf("Value at uninitialized void pointer %p is %d.\n", ptr3, *ptr3);

   return 0;
}
