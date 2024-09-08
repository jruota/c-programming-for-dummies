#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

struct lili {
   int value;
   struct lili *next;
};

struct lili *first = NULL;
struct lili *current = NULL;

void menu(void);
void show(void);
void add(void);
void delrec(void);
void load_file(char *);
void save_file(char *);
struct lili *create(void);

int main(void) {
   char filename[] = "lili.dat";

   load_file(filename);
   menu();
   save_file(filename);

   return 0;
}

void menu(void) {
   int c, choice = '\0';

   while (choice != 'Q') {
      printf("Do you want to [S]how, [A]dd, [R]emove, [Q]uit? ");
      choice = toupper(getchar());
      while ((c = getchar()) != '\n' && c != EOF) {
         ;
      }
      switch (choice) {
         case 'S':
            show();
            break;
         case 'A':
            add();
            break;
         case 'R':
            delrec();
            break;
         case 'Q':
            break;
      }
   }

   return;
}

void show(void) {
   int no = 1;

   if (first == NULL) {
      puts("Nothing to print");
      return;
   }

   current = first;
   // puts("Printing all data:");
   while (current) {
      printf("#: %d\t", no);
      printf("Address: %p\t", current);
      printf("Value: %d\t", current->value);
      printf("Next: %p\n", current->next);
      no++;
      current = current->next;
   }

   return;
}

void add(void) {
   int c;
   struct lili *new;

   new = create();
   if (new == NULL) {
      return;
   }

   printf("Enter new value: ");
   scanf("%d", &new->value);
   while ((c = getchar()) != '\n' && c != EOF) {
      ;
   }
   if (first == NULL) {
      first = new;
      current = first;
   } else {
      current = first;
      while (current->next) {
         current = current->next;
      }
      current->next = new;
      current = new;
   }
   current->next = NULL;

   return;
}

void delrec(void) {
   int r, c;
   struct lili *previous;

   if (first == NULL) {
      puts("No records to remove");
      return;
   }

   puts("Choose a record to remove: ");
   show();
   printf("Record: ");
   scanf("%d", &r);
   while ((c = getchar()) != '\n' && c != EOF) {
      ;
   }
   current = first;
   previous = NULL;
   c = 1;
   while (c != r) {
      previous = current;
      current = current->next;
      c++;
      if (current == NULL) {
         puts("Record not found");
         return;
      }
   }

   if (previous == NULL) {
      first = current->next;
   } else {
      previous->next = current->next;
   }
   free(current);

   return;
}

void load_file(char *filename) {
   FILE *fh;
   struct lili *new;
   int r;

   fh = fopen(filename, "r");
   if (fh == NULL) {
      printf("File error: there is no file '%s'\n", filename);
      return;
   }

   printf("Loading data from file '%s'\n", filename);
   while (!feof(fh)) {
      new = create();
      r = fread(new, sizeof(struct lili), 1, fh);
      if (!r) {
         free(new);  // necessary?
         break;
      }
      if (first == NULL) {
         first = new;
         current = first;
      } else {
         current->next = new;
         current = current->next;
      }
      current->next = NULL;
   }

   fclose(fh);
   puts("Data loaded");

   return;
}

void save_file(char *filename) {
   FILE *fh;

   fh = fopen(filename, "w");
   if (fh == NULL) {
      printf("File error: unable to create file '%s'\n", filename);
      return;
   }

   current = first;
   while (current) {
      fwrite(current, sizeof(struct lili), 1, fh);
      current = current->next;
   }
   fclose(fh);
   printf("Data written to file '%s'\n", filename);

   return;
}

struct lili *create(void) {
   struct lili *new;

   new = malloc(sizeof(struct lili));
   if (new == NULL) {
      puts("Error, not enough memory");
      return NULL;
   }

   return new;
}
