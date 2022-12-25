/* Author: Pat Gear
 * Date: January 10, 2010
 * Purpose: Prompts the user for a temperature on the Celsius scale and prints
 * the corresponding temperature on the Fahrenheit scale to the screen.
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    double celsius;
    double fahrenheit;
    
    printf( "Please enter a Celsius temperature: \n" );
    scanf( "%lf", &celsius );
    
    fahrenheit = celsius * 9 / 5 + 32;
    
    printf( "Corresponding Fahrenheit temperature: %f\n", fahrenheit );
    
    system( "PAUSE" );
    return 0;
}