/* Author: Nate Noguera
 * Date:
 * Purpose:
 */

#include <stdio.h>
#include <stdlib.h>

#define BASE_CUTOFF     12500.00
#define MID_CUTOFF      65000.00
#define MID_RATE        0.24
#define HIGH_RATE       0.32
#define HIGH_BASE_TAX   12600.00

int main(void) {
    double income;
    double taxOwing;

    printf( "Please enter your income: " );
    scanf( "%lf", &income );

    /* your code here */
    if (income <= BASE_CUTOFF) {
        taxOwing = 0.0;
    }
    /* your code here */
    else if (income > BASE_CUTOFF && income < MID_CUTOFF) {
        taxOwing = ( income - BASE_CUTOFF ) * MID_RATE;
    }
    /* your code here */
    else {
        taxOwing = HIGH_BASE_TAX + ( income - MID_CUTOFF ) * HIGH_RATE;
    }

    printf( "Tax owing: $%.2f\n", taxOwing );
    
    return 0;
}