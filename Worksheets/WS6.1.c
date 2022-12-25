/*
 * Author: Nate Noguera
 * Date:
 * Purpose: Compute the volume of a sphere. The user is prompted for the
 *          radius (in cm.), and the computed answer (in cubic cm.) is
 *          displayed on the screen.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI acos(-1.0)

int main(void) {    
    /* Your code goes here */
    double radius;
    double volume;
    double exponent = 3.0;

    printf("Please enter the radius of the sphere (in cm): ");
    scanf("%lf", &radius);

    volume = PI * 4 / 3 * pow(radius, exponent);

    printf("The volume of the sphere is: %f cubic cm.\n", volume);

    system("PAUSE");
    return 0;
}