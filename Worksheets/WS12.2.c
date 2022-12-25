#include <stdio.h>
#include <stdlib.h>

#define INPUTFILE "yvrTemperature08.dat"

int main(void) {
    FILE* inFile;
    double averageTemp;
    double nextTemp;
    double totalTemp;
    int numDays;
    int numTemps;

    inFile = fopen(INPUTFILE, "r");

    if (inFile == NULL)
      printf("Error opening file: %s.\n", INPUTFILE);

    else {
      totalTemp = 0;
      numTemps = 0;

      while (fscanf(inFile, "%lf", &nextTemp) == 1) {
        numTemps++;
        if (numTemps % 5 == 2)
          totalTemp += nextTemp;
      }
      fclose(inFile);
    }

    
    numDays = numTemps / 5;
    averageTemp = totalTemp / numDays;

    printf("Average temperature at midnight: %.1lf", averageTemp);
    
    return 0;
}