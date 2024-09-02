#include <stdio.h>
#include <time.h>

int main(void) {
   time_t curtime = time(NULL);
   struct tm *nowtime = localtime(&curtime);

   printf("The current time is %02d:%02d:%02d %s\n",
          (nowtime->tm_hour) > 12 ? (nowtime->tm_hour - 12) : nowtime->tm_hour,
          nowtime->tm_min, nowtime->tm_sec,
          (nowtime->tm_hour) < 12 ? "AM" : "PM");

   return 0;
}
