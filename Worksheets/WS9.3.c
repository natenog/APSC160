/* Author: Nate Noguera
 * Date: September 23, 2021
 * Purpose: Prompts the user for the air temperature (in degrees Celsius) and pressure (in PSI) inside a mechanical device. Computes if the device is operating in normal conditions.
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN_TEMP     5.0
#define MAX_TEMP     300.0
#define MAX_PRESSURE 150.0
/* Your code here */

int main(void) {
    /* Your code here */
    double temperature;
    double pressure;

    printf("Enter air temperature in degrees C: ");
    scanf("%lf", &temperature);

    printf("Enter pressure in PSI: ");
    scanf("%lf", &pressure);

    if (pressure < 0) {
      printf("Error: input not valid");
    }
    else if ((temperature < MIN_TEMP || temperature > MAX_TEMP) || pressure > MAX_PRESSURE) {
      printf("Machine is not operating under normal conditions!");
    }
    else if (temperature > 250.0 && pressure > 100.0) {
      printf("Machine is not operating under normal conditions!");
    }
    else {
      printf("Machine is operating under normal conditions!");
    }

    return 0;
}