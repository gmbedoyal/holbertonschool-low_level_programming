#include "main.h"
/**
  *_mod_recursion - divide n by n-1
  *@n: integer
  *@m: integer
  *Return: array of modules
  */

int _mod_recursion(int n, int divisor)
{

if (n == divisor)
{
	return (1);
}
if (n % divisor == 0)
{
return (0);
}
else
{
	return (_mod_recursion(n, divisor + 1));
}
}

/**
  *is_prime_number - check the code
  *@n: integer
  *Return: 1 if the input integer is a prime number, otherwise 0
  */

int is_prime_number(int n)
{
int m = n;

if (m > 1)
{
	return (_mod_recursion(n, 2));
}
else
return (0);
}
