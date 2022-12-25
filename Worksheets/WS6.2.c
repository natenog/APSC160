/* 
 * Author: Nate Noguera
 * Date: September 22, 2021
 * Purpose: Compute the position of a particle of mass oscillating
 *          on a spring with no external forces at the given time.
 *          The user is prompted for the initial position, initial
 *          velocity, and a time. We'll assume a mass of 2 units
 *          and a spring constant of 0.5.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MASS      2.2
#define STIFFNESS 0.4

int main(void) {
    /* Your code here */
    double positionInitial;
    double positionFinal;
    double velocityInitial;
    double time;

    printf("Enter the initial position (in m): ");
    scanf("%lf", &positionInitial);

    printf("Enter the initial speed (in m/s): ");
    scanf("%lf", &velocityInitial);

    printf("Enter a time (in s): ");
    scanf("%lf", &time);

    positionFinal = positionInitial * cos(sqrt(STIFFNESS / MASS) * time) + (velocityInitial / sqrt(STIFFNESS / MASS)) * sin(sqrt(STIFFNESS / MASS) * time);

    printf("The position x(t) of the particle is: %.3f m.", positionFinal);

    system("PAUSE");
    return 0;
}