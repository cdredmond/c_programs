/* Function to find the greatest common divisor	of two
	nonnegative integer values and return the result	*/

#include <stdio.h>

int gcd(int u, int v)
{
  int temp;

  while (v != 0)
  {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}

int main(void)
{
  int u, v;

  u = 150;
  v = 35;
  printf("The gcd of %i and %i is %i\n", u, v, gcd(u, v));

  u =1026;
  v = 405;
  printf("The gcd of %i and %i is %i\n", u, v, gcd(u, v));

  u = 83;
  v = 240;
  printf("The gcd of %i and %i is %i\n", u, v, gcd(u, v));

  return 0;
}

