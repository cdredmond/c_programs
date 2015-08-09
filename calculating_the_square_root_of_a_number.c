// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x)
{
  if (x < 0)
    x = -x;

  return (x);
}


// Function to compute the square root of a number

float squareRoot(float x)
{
  const float epsilon = .00001;
  float guess = 1.0;

  while (absoluteValue (guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;

  return guess;
}


int main(void)
{
  printf("square (2.0) = %f\n", squareRoot(2.0));
  printf("squareRoot (144.0) = %f\n", squareRoot(144.0));
  printf("squareRoot (17.5) = %f\n", squareRoot(17.5));
  printf("squareRoot (169.0) = %f\n", squareRoot(169.0));
  printf("squareRoot (81.0) = %f\n", squareRoot(81.0));

  return 0;
}

