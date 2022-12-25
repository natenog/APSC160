/*
 * Author:       Nate Noguera
 * Student #:    
 * Lab section:  L1X
 * Date:         September 20, 2021
 * Purpose:      To calculate the mass of a steel bar
 */

#include <stdio.h>
#include <stdlib.h>
#define DENSITY_STEEL 7850

int main( void ) {
  int bar_Length;
  int bar_Width;
  int bar_Height;
  int bar_Mass;

  printf("Enter the length of the steel bar: ");
  scanf("%i", &bar_Length);

  printf("Enter the width of the steel bar: ");
  scanf("%i", &bar_Width);

  printf("Enter the height of the steel bar: ");
  scanf("%i", &bar_Height);

  bar_Mass = DENSITY_STEEL * (bar_Length * bar_Width * bar_Height);

  printf("Mass of the steel bar: %i\n", bar_Mass);

  system( "PAUSE" );
  return 0;
}