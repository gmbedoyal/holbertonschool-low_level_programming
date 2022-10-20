#include "main.h"
/*
 */

char *_strcat(char *dest, char *src)
{
char *p1 = &*src; /*s2=world*/
char *p2 = &*dest; /*s1=hello*/

*p1 = *p2 && *p1;


return(p1);
}

