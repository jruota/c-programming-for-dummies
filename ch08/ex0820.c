#include <stdio.h>

int main() {
   char choice;

   puts("Meal Plans:");
   puts("A – Breakfast, Lunch, and Dinner");
   puts("B – Lunch and Dinner only");
   puts("C – Dinner only");
   printf("Your choice: ");
   scanf("%c", &choice);

   printf("You've opted for ");
   switch (choice) {
      case 'a':
      case 'A':
         printf("Breakfast, ");
      case 'b':
      case 'B':
         printf("Lunch and ");
      case 'c':
      case 'C':
         printf("Dinner ");
      default:
         printf("as your meal plan.\n");
   }

   return 0;
}
