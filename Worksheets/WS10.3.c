/*
 * Author: Nate Noguera
 * Date:    
 * Purpose: 
 */

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1

int main( void ) {
    /* your code here */
    double sum = 0;
    double count = 0;
    double nextVal;
    double average;

    printf("Enter a non-negative integer: ");
    scanf("%lf", &nextVal);

    while (nextVal != -1) {
      sum += nextVal;
      count++;
      printf("Enter another non-negative integer: ");
      scanf("%lf", &nextVal);
    }

    if (count == 0)
      printf("Error: no data!");
    else {
      average = sum / count;
      printf("%f", average);
    }

    return 0;
}