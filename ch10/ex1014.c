#include <stdio.h>

#define GRID 5
#define SENTENCE "I am a test sentence"

/* prototypes */
void forward(void);
void backwards(void);

int main() {
   puts(SENTENCE);
   printf("Here is the test sentence again: %s\n", SENTENCE);
   puts("Grid forward:");
   forward();
   puts("Grid backwards:");
   backwards();

   return 0;
}

void forward(void) {
   int x, y;

   for (x = 0; x < GRID; x++) {
      for (y = 0; y < GRID; y++) {
         printf("%d:%d\t", x, y);
      }
      putchar('\n');
   }
}

void backwards(void) {
   int x, y;

   for (x = GRID - 1; x >= 0; x--) {
      for (y = GRID - 1; y >= 0; y--) {
         printf("%d:%d\t", x, y);
      }
      putc('\n', stdout);
   }
}
