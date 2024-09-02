#include <stdio.h>
#include <time.h>

int main(void) {
   time_t curtime = time(NULL);
   struct tm *nowtime = localtime(&curtime);

   printf("The current time is %d:%02d:%02d\n", nowtime->tm_hour,
          nowtime->tm_min, nowtime->tm_sec);

   return 0;
}
