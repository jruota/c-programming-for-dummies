#include <ctype.h>
#include <stdio.h>

int main() {
   char phrase[] =
       "When in the Course of human events, it becomes necessary for one "
       "people to dissolve the political bands which have connected them with "
       "another, and to assume among the powers of the earth, the separate and "
       "equal station to which the Laws of Nature and of Nature's God entitle "
       "them, a decent respect to the opinions of mankind requires that they "
       "should declare the causes which impel them to the separation.";

   int index, alpha, space, punct, upper, lower;

   alpha = space = punct = 0;

   /* gather data */
   index = 0;
   while (phrase[index]) {
      if (isalpha(phrase[index])) {
         alpha++;
      }
      if (isspace(phrase[index])) {
         space++;
      }
      if (ispunct(phrase[index])) {
         punct++;
      }
      if (isupper(phrase[index])) {
         upper++;
      }
      if (islower(phrase[index])) {
         lower++;
      }
      index++;
   }

   /* print results */
   printf("\"%s\"\n", phrase);
   puts("Statistics:");
   printf("%d total characters\n", index);
   printf("%d alphabetic characters\n", alpha);
   printf("%d uppercase letters\n", upper);
   printf("%d lowercase letters\n", lower);
   printf("%d spaces\n", space);
   printf("%d punctuation symbols\n", punct);

   return 0;
}
