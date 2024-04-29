#include <stdio.h>

void version1(void);
void version2(void);

int main() {
   printf("Running %s:\n", "version1");
   version1();
   puts("");
   printf("Running %s:\n", "version2");
   version2();

   return 0;
}

void version1() {
   int wd;

   printf("Enter a weekday number, 0 - 6: ");
   scanf("%d", &wd);

   switch (wd) {
      case 0:
         puts("Sunday");
         break;
      case 1:
         puts("Monday");
         break;
      case 2:
         puts("Tuesday");
         break;
      case 3:
         puts("Wednesday");
         break;
      case 4:
         puts("Thursday");
         break;
      case 5:
         puts("Friday");
         break;
      case 6:
         puts("Saturday");
         break;
      default:
         puts("Wrong input!");
         break;
   }
}

void version2() {
   int wd;

   enum { SUN, MON, TUE, WED, THU, FRI, SAT };

   printf("Enter a weekday number, 0 - 6: ");
   scanf("%d", &wd);

   switch (wd) {
      case SUN:
         puts("Sunday");
         break;
      case MON:
         puts("Monday");
         break;
      case TUE:
         puts("Tuesday");
         break;
      case WED:
         puts("Wednesday");
         break;
      case THU:
         puts("Thursday");
         break;
      case FRI:
         puts("Friday");
         break;
      case SAT:
         puts("Saturday");
         break;
      default:
         puts("Invalid input!");
         break;
   }
}
