#include <stdio.h>
#include <time.h>

int main() {
   time_t tictoc;

   time(&tictoc);
   printf("The time is now %s", ctime(&tictoc));  // deprecated

   // ##########################################################################

   // https://sourceware.org/glibc/manual/latest/pdf/libc.pdf
   // 22.5.8 Time Functions Example, p. 731

   /* This buffer is big enough that the strftime calls below cannot possibly
    * exhaust it. */
   char buf[256];

   /* Get the current time */
   time_t curtime = time(NULL);

   /* Convert it to local time representation. */
   struct tm *lt = localtime(&curtime);
   if (!lt) {
      return 1;
   }

   /* Print the date and time in a simple format that is independent of locale.
    */
   strftime(buf, sizeof buf, "%Y–%m–%d %H:%M:%S", lt);
   puts(buf);

   /* Print it in a nice English format. */
   strftime(buf, sizeof buf, "Today is %A, %B %d.", lt);
   puts(buf);
   strftime(buf, sizeof buf, "The time is %I:%M %p.", lt);
   puts(buf);

   // ##########################################################################

   return 0;
}
