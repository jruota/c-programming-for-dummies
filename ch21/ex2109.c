#include <stdio.h>
#include <time.h>

int main(void) {
   char *weekdays[] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};
   time_t now = time(NULL);
   struct tm *nowtime = localtime(&now);

   printf("Today is %s.\n", weekdays[nowtime->tm_wday]);

   return 0;
}
