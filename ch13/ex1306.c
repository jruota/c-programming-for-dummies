#include <ctype.h>
#include <stdio.h>

void change_case(char string[]);

int main() {
   char phrase1[] =
       "When in the Course of human events, it becomes necessary for one "
       "people to dissolve the political bands which have connected them with "
       "another, and to assume among the powers of the earth, the separate and "
       "equal station to which the Laws of Nature and of Nature's God entitle "
       "them, a decent respect to the opinions of mankind requires that they "
       "should declare the causes which impel them to the separation.";
   char phrase2[] = "ThiS Is a RANsom NoTE!";

   puts("Original Text:");
   printf("\"%s\"\n", phrase1);
   change_case(phrase1);
   puts("Modified Text:");
   printf("\"%s\"\n", phrase1);

   puts("Original Text:");
   printf("\"%s\"\n", phrase2);
   change_case(phrase2);
   puts("Modified Text:");
   printf("\"%s\"\n", phrase2);

   return 0;
}

void change_case(char string[]) {
   int index = 0;

   while (string[index] != '\0') {
      if (islower(string[index])) {
         string[index] = toupper(string[index]);
      } else if (isupper(string[index])) {
         string[index] = tolower(string[index]);
      }
      index++;
   }

   return;
}
