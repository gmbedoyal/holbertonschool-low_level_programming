#include "main.h"
/**
 * leet - check code
 * @s: pointer
 * Return: no return
 */

char *leet(char *s)
{
int i = 0;
char crypt[] = "4307143071";
char AEOTL[] = "AEOTLaeotl";
int j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; AEOTL[j] != '\0' ; j++)
	{
		if (s[i] == AEOTL[j])
			{
			s[i] = crypt[j];
			}
	}
}
return (s);
}

