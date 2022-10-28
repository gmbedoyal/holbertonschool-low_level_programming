#include "main.h"

/**
  *_arrproduct - the product of array elements
  *a[]: array
  *@n: size of array
  *Return: 1 if the input integer is a prime number, otherwise 0
  */

int _arrproduct(int a[], int n)
{
if (n <= 0)
{
	return (a[0]);
}
return (a[n] * _arrproduct(a, n - 1));
}

/**
  *_mod_recursion - module of n / (n-1)
  *@n: integer
  *@m: integer
  *Return: array of modules
  */
int _mod_recursion(int n, int m)
{
int d;
int a[9999999];

if (m >= 2)
{
	d = n % m;
	_mod_recursion(n, m - 1);
	*a = (d);
	return (_arrproduct(a, n));
}
return (_arrproduct(a, n));
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
	return (_mod_recursion(n, m - 1));
}
else
return (0);
}
