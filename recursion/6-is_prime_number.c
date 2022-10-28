#include "main.h"

/**
  *is_prime_number - check the code
  *@n: integer
  *Return: 1 if the input integer is a prime number, otherwise 0
  */

int _arrproduct(int a[], int n)
{
if (n <= 0)
{return(a[0]);}
return(a[n]*_arrproduct(a, n - 1));
}


int _mod_recursion(int n, int m)
{
if (m >= 2)
{
int d;
int a[99];

  d = n % m;
  _mod_recursion(n, m - 1);
  *a = (d);
  return(_arrproduct(a, n));
}
}

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
