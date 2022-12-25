#include <stdio.h>
#include <stdlib.h>

/*
Purpose: Returns the factorial of a given positive integer.
Parameter: num - a positive integer
Returns: factorial of the number
*/

int factorial(int num) {
  int factorial = num;
  int multiplier;

  if (num > 0) {
    multiplier = num - 1;
    while (multiplier > 0) {
      factorial *= multiplier;
      multiplier--;
    }
  }

  else {
    factorial = 1;
  }

  return factorial;
}