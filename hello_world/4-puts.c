#include <stdio.h>
#include <string.h>

int main () {
   char str1[100];

   strcpy(str1, "Programming is like building a multilingual puzzle", 0x22);

   puts(str1);
   
   return(0);
}
