/*
 * Author: Nate Noguera
 * Date: September 28, 2021
 * Purpose: Prompts the user for integers and prints the largest value.
 */

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1

int main( void ) {
    /* your code here */
    int count = 0;
    double nextVal;
    double largestValue = 0;

    printf("Enter an integer: ");
    scanf("%lf", &nextVal);

    while (nextVal != SENTINEL) {
      count++;
      if (nextVal > largestValue)
        largestValue = nextVal;
      printf("Enter another integer: ");
      scanf("%lf", &nextVal);
    }

    if (count == 0)
      printf("Error: no data!");
    else
      printf("Largest value: %f", largestValue);

    return 0;
}