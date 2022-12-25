/*
Author: Nate Noguera
Date: October 12, 2021
Purpose: Reads a file containing daily temperatures from 2008 and prints out the maximum and minimum temperatures in the year.
*/

#include <stdio.h>
#include <stdlib.h>

#define INPUTFILE "yvrTemperature08.dat"

int main(void) {
  FILE* inFile;
  double temperature;
  double maxTemperature = 0;
  double minTemperature;
  int numberTemperature = 0;

  inFile = fopen(INPUTFILE, "r");

  if (inFile == NULL)
    printf("Error opening input file - program terminating...\n");

  else {
    while (fscanf(inFile, "%lf", &temperature) == 1) {
      numberTemperature++;

      if (numberTemperature % 5 == 4) {

        if (temperature > maxTemperature)
          maxTemperature = temperature;

        else if (temperature <= minTemperature)
          minTemperature = temperature;
      }
    }
    printf("Maximum temperature: %.1lf, minimum temperature: %.1lf.", maxTemperature, minTemperature);

    fclose(inFile);
  }

  return 0;
}