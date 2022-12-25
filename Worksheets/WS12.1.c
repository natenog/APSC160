#include <stdio.h>
#include <stdlib.h>

#define INPUTFILE "weights.dat"

int main(void) {
    FILE*   inFile;
    double  nextVal;
    double  thresholdVal;
    int     countAbove = 0;
    
    inFile = fopen(INPUTFILE, "r");
    
    if (inFile == NULL)
        printf("Error opening input file - program terminating...\n");
    else {
    
        /* Your code here */
        printf("Please enter a threshold value: ");
        scanf("%lf", &thresholdVal);

        while (fscanf(inFile, "%lf", &nextVal) == 1) {
          if (nextVal > thresholdVal)
            countAbove++;
        }

        printf("%d", countAbove);
        fclose(inFile);
    }
    
    return 0;
}