#include "main.h"
/*
 */

char *_strcat(char *dest, char *src)
{
char *p1 = &*dest;
char *p2 = &*src; 

char s3 [99] = "0";
char *p3 = &*s3;

*p3 = *p1 && *p2;

return(p3);
}

