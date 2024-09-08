#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

struct lili {
   int value;
   struct lili *next;
};

struct lili *first = NULL;
struct lili *current = NULL;

const char filename[] = "lili.dat";

void menu(void);
void show(void);
void add(void);
void delrec(void);
struct lili *create(void);
void load_file(void);
void save_to_file(void);

int main(void) {
   load_file();
   menu();
   save_to_file();

   return 0;
}

void menu(void) {
   int c;
   int choice = '\0';

   while (choice != 'Q') {
      printf("Do you want to (S)how, (A)dd, (R)emove or (Q)uit? ");
      choice = toupper(getchar());
      /* flush buffer */
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
            return;
            break;
      }
   }

   return;
}

void show(void) {
   int count = 1;

   if (first == NULL) {
      puts("Nothing to show");
      return;
   }

   current = first;
   puts("Showing all data");
   while (current) {
      printf("Record %d: Address -> %p\tValue -> %d\tNext -> %p\n", count,
             current, current->value, current->next);
      current = current->next;
      count++;
   }

   return;
}

void add(void) {
   printf("--- DEBUG: in function 'add' ---\n");

   int c;

   if (first == NULL) {
      first == create();
      current = first;
   } else {
      current = first;
      while (current->next) {
         current = current->next;
      }
      current->next = create();
      current = current->next;
   }

   printf("Type a value: ");
   scanf("%d", &(current->value));
   current->next = NULL;
   // flush buffer
   while ((c = getchar()) != '\n' && c != EOF) {
      ;
   }

   show();

   printf("--- DEBUG: leaving function 'add' ---\n");
   return;
}

void delrec(void) {
   int c, r;
   struct lili *previous;

   if (first == NULL) {
      puts("There are no records to remove");
      return;
   }

   puts("Choose a record to remove:");
   show();
   printf("Record: ");
   scanf("%d", &r);
   /* flush buffer */
   while ((c = getchar()) != '\n' && c != EOF) {
      ;
   }

   previous = NULL;
   current = first;
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

   /* remove the first record? */
   if (previous == NULL) {
      first = first->next;
   } else {
      previous->next = current->next;
   }

   free(current);

   return;
}

void load_file(void) {
   printf("--- DEBUG: in function 'load_file' ---\n");

   FILE *fh;
   int r;
   struct lili *temp;

   printf("--- DEBUG: opening file '%s' ---\n", filename);
   fh = fopen(filename, "r");
   if (fh == NULL) {
      printf("File error - there is not file '%s'\n", filename);
      puts("No data loaded to memory");
      return;
   }
   printf("--- DEBUG: file '%s' opened ---\n", filename);

   /*
    * Here is one error:
    * The structure is being read into a memory location allocated for a
    * pointer, which most likely is not enough memory.
    */
   /*    printf("--- DEBUG: loading first linked list ---\n");
      r = fread(first, sizeof(struct lili), 1, fh);
      if (r == 0) {
         puts("No structures in file");
         return;
      }
      first->next = NULL;
      printf("--- DEBUG: first linked list read ---\n"); */

   while (!feof(fh)) {
      temp = create();
      if (temp == NULL) {
         return;
      }
      r = fread(temp, sizeof(struct lili), 1, fh);
      if (r == 0) {
         free(temp);
         break;
      }
      if (first == NULL) {
         first = temp;
         current = first;
      } else {
         current->next = temp;
         current = temp;
      }
      current->next = NULL;
   }

   fclose(fh);

   puts("Data read successfully");
   show();

   printf("--- DEBUG: exiting function 'load_file' ---\n");

   return;
}

void save_to_file(void) {
   FILE *fh;

   if (first == NULL) {
      puts("There is nothing to save");
      return;
   }

   fh = fopen(filename, "w");
   if (fh == NULL) {
      printf("File error - could not open file '%s'\n", filename);
      exit(1);
   }

   current = first;
   while (current) {
      fwrite(current, sizeof(struct lili), 1, fh);
      current = current->next;
   }
   printf("All data saved in file '%s'\n", filename);

   fclose(fh);

   return;
}

struct lili *create(void) {
   struct lili *new;

   new = malloc(sizeof(struct lili));
   if (new == NULL) {
      puts("Error, not enough memory");
      // return NULL;
      exit(1);
   }

   return new;
}
