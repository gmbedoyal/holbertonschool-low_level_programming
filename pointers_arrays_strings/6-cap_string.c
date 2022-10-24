#include "main.h"
/**
 * cap_string - check code
 * @s: pointer
 * Return: no return
 */

char *cap_string(char *s)
{
int i = 0;

while (s[i])
{
	if (((s[i] - 1) == (","||";"||"."||"!"||"\n"||"\t"||" "||"?"||"\""||"("||")"||"{"||"}")) && (s[i] > 90))
	{
		s[i] = s[i] - 32;
	}
	i++;
}
return (s);
}

