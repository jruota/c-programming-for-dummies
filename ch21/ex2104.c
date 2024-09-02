#include <stdio.h>
#include <time.h>

int main(void) {
   time_t notsorandomtime = 946684800;

   printf("The number %lu gives the time %s", notsorandomtime,
          ctime(&notsorandomtime));

   // ##########################################################################

   // https://sourceware.org/glibc/manual/latest/pdf/libc.pdf
   // 22.5.8 Time Functions Example, p. 731

   /* This buffer is big enough that the strftime calls below cannot possibly
    * exhaust it. */
   char buf[256];

   /* Convert it to local time representation. */
   struct tm *lt = localtime(&notsorandomtime);
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

   return 0;
}
