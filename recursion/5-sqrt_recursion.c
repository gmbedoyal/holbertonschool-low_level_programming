#include "main.h"

/**
  *_cuadrado - multiplies a number by itself.
  *@n: integer
  *@m: integer
  *Return: -1 to indicate an error, otherwise, an integer.
  */

int _cuadrado (int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	{
		return (_cuadrado(n, m + 1));
	}
}

/**
  *_sqrt_recursion - returns the natural sq root of a number.
  *@x: integer
  *@y: integer
  *Return: -1 to indicate an error, otherwise, an integer.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
return (_cuadrado(n, 1));
}
