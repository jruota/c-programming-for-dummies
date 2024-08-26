#include <stdio.h>

void func1(void);
void func2(void);

int main() {
   func1();
   putc('\n', stdout);
   func2();

   return 0;
}

void func1(void) {

   puts("--- DEBUG: in 'func1' ---");

   char array[] = "abcdefghijklmnopqrstuvwxyz";
   char *p = "abcdefghijklmnopqrstuvwxyz";
   int x;

   x = 0;
   while (putchar(array[x])) {
      x++;
   }
   putchar('\n');

   x = 0;
   while (putchar(*(array + x))) {
      x++;
   }
   putchar('\n');

   char *ptr = p;
   while (putchar(*ptr)) {
      ptr++;
   }
   putchar('\n');

   x = 0;
   ptr = p;
   while (putchar(*(ptr + x))) {
      x++;
   }
   putchar('\n');

   x = 0;
   ptr = p;
   while (putchar(ptr[x])) {
      x++;
   }
   putchar('\n');

   puts("--- DEBUG: leaving 'func1' ---");

   return;
}

void func2(void) {

   puts("--- DEBUG: in 'func2' ---");

   char *array[] = {"abcd", "efgh", "ijkl", "mnop", "qrst", "uvwxyz"};
   // char **p = {"abcd", "efgh", "ijkl", "mnop", "qrst", "uvwxyz"};

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   int i, x;
   char *ptr;

   printf("address of 'array' (&array) -> %p\n", &array);
   printf("value of 'array' (array) -> %p\n", array);
   printf("size of 'array' -> %zd\n", sizeof(array));
   printf("length of 'array' -> %zd\n", sizeof(array) / sizeof(char *));

   putchar('\n');

   puts("looping through 'array'");
   for (x = 0; x < sizeof(array) / sizeof(char *); x++) {
      printf("\tarray[%d] -> %p\n", x, array[x]);
      printf("\t\t*array[%d] -> %c\n", x, *array[x]);

      ptr = array[x];
      printf("\t\t\t");
      for (i = 0; *(ptr + i); i++) {
         printf("%c ", *(ptr + i));
      }
      putchar('\n');
   }
   putchar('\n');

   puts("looping through 'array'");
   for (x = 0; x < sizeof(array) / sizeof(char *); x++) {
      printf("\t[%d] -> %p\n", x, array + x);
      printf("\t\t*array[%d] -> %c\n", x, *array[x]);

      ptr = array[x];
      printf("\t\t\t");
      for (i = 0; *(ptr + i); i++) {
         printf("%c ", *(ptr + i));
      }
      putchar('\n');
   }
   putchar('\n');

   // --------------------------------------------------------------------------

   char **p = array;
   char *inner_ptr;
   size_t array_size = sizeof(array) / sizeof(char *);

   for (i = 0; i < array_size; i++, p += 1) {
      inner_ptr = *p;
      printf("'i' -> %d\t", i);
      printf("'p' -> %p\t", p);
      printf("'inner_ptr' -> %p\t", inner_ptr);
      while (putchar(*inner_ptr)) {
         // inner_ptr++;
         // inner_ptr = inner_ptr + 1;
         inner_ptr += 1;
      }
      putchar('\n');
   }

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   puts("--- DEBUG: leaving 'func2' ---");

   return;
}
