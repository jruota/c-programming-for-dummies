#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

struct agent {
   char actor[32];
   int year;
   char title[32];
};

void cleanstring(char *);
void fillagent(struct agent *);
struct agent *makeagent(void);
void printagent(struct agent *);
void saveagent(struct agent *);

int main(void) {
   int c, ans;

   while (1) {
      printf("Do you want to create a new agent [y\\n]? ");
      ans = toupper(getchar());

      // getchar();  // clear '\n' from buffer

      // flush buffer
      while ((c = getchar()) != '\n' || c != EOF) {
         ;
      }

      if (ans == 'Y') {
         struct agent *a = makeagent();
         fillagent(a);
         printagent(a);
         saveagent(a);
      } else if (ans == 'N') {
         break;
      } else {
         puts("Unknown input");
         continue;
      }
   }
}

struct agent *makeagent(void) {
   struct agent *a = malloc(sizeof(struct agent));

   if (a == NULL) {
      puts("ERROR: not enough memory to create new agent");
      exit(1);
   }

   return a;
}

void fillagent(struct agent *a) {
   int c;

   printf("Actor's name: ");
   fgets(a->actor, 32, stdin);
   cleanstring(a->actor);

   printf("Year the movie was filmed: ");
   scanf("%d", &(a->year));

   // getchar();  // clear '\n' from buffer

   // flush buffer
   while ((c = getchar()) != '\n' || c != EOF) {
      ;
   }

   printf("Title of the movie: ");
   fgets(a->title, 32, stdin);
   cleanstring(a->title);

   return;
}

void printagent(struct agent *a) {
   putchar('\n');
   puts("--- Printing agent ---");
   printf("Actor:\t%s\n", a->actor);
   printf("Year:\t%d\n", a->year);
   printf("Title:\t%s\n", a->title);
   putchar('\n');

   return;
}

void cleanstring(char *s) {
   int x = 0;

   while (*(s + x)) {
      if (*(s + x) == '\n' && *(s + (x + 1)) == '\0') {
         *(s + x) = '\0';
         break;
      }
      x++;
   }

   return;
}

void saveagent(struct agent *a) {
   FILE *fh;

   fh = fopen("bond.db", "a");
   if (fh == NULL) {
      puts("FILE ERROR");
      exit(1);
   }

   fwrite(a, sizeof(struct agent), 1, fh);
   fclose(fh);

   puts("Agent successfully saved to memory");

   return;
}
