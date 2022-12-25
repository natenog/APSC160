/* Author:   Nate Noguera
 * Date:     October 12, 2021
 * Purpose:  Reads an image file in grayscale format
 *           and generates a new image file with increased         *           brightness.
 *           
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INPUTFILE "input.pgm"
#define OUTPUTFILE "output.pgm"

int main(void) {
    FILE *inFile;
    FILE *outFile;
    int width;
    int height;
    int white;
    int inPixel;
    int outPixel;
    int countX;
    int countY;

    /* Your code here */
    inFile = fopen(INPUTFILE, "r");
    outFile = fopen(OUTPUTFILE, "w");

    if (inFile == NULL || outFile == NULL)
      printf("Error");

    else {
      fscanf(inFile, "%d %d %d", &width, &height, &white);

      fprintf(outFile, "%d %d %d \n", width, height, white);

      countY = 0;
      while (countY < height) {
        countX = 1;
        while (countX <= width) {
          fscanf(inFile, "%d", &inPixel);
          outPixel = (double) white * (sqrt((double) inPixel / (double) white));
          fprintf(outFile, "%d ", outPixel);
          countX++;
        }
        fprintf(outFile, "\n");
        countY++;
      }
      fclose(inFile);
      fclose(outFile);
    }

    return 0;
}