#include <stdio.h>
#include <string.h>

int main () {
   char str1[66];

   strcpy(str1, "%cProgramming is like building a multilingual puzzle", 0x22);

   puts(str1);
   
   return(0);
}
