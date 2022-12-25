/*
 * Author:       Nate Noguera
 * Date:         
 * Student ID:	 
 *
 * Purpose:      Prompt the user for the separation between points on
 *               a rectangular grid, superimposed on a plate.  Print the
 *               temperature at each point on the grid in tabular format
 *               to two decimal places.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define   WIDTH    100
#define   HEIGHT   60
#define   PI       acos( -1.0 )

int main( void ) {
  int     x = 0;
  int     y = 60;
  int     deltaX;
  int     deltaY;
  double  temperature;
  
  printf("Enter grid spacing in x-direction:\n");
  scanf("%d", &deltaX );

  printf("Enter grid spacing in y-direction:\n");
  scanf("%d", &deltaY);
  
  /* Your code here */
  if (WIDTH % deltaX != 0 || HEIGHT % deltaY != 0)
    printf("Error: ");

  else {
    while (y >= 0) {
      printf("y = %2d: ", y);

      while (x <= WIDTH) {
        
        temperature = (10 * sin((2*PI*x)/WIDTH)) * (cos((2*PI*y)/HEIGHT));
        printf("%5.2lf ", temperature);

        x += deltaX;

      }

      printf("\n");

      y -= deltaY;
      x = 0;
    }
  }

  return 0;
}