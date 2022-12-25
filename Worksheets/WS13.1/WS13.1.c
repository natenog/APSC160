/* Author:   Nate Noguera
 * Date:     October 12, 2021
 * Purpose:  Prompt a user for a positive integer N. Then,
 *           write to the file "sineTable.dat" a table of
 *           sine values for the input values:
 *           PI/N, 2*PI/N, ..., N*PI/N.
 *           
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define OUTPUTFILE "sineTable.dat"
#define HEADER "    x sin(x)\n"
#define PI acos(-1.0)

int main(void) {
  FILE* outputFile;
  int integer;
  int column = 1;
  int row = 1;
  int factor = 1;
  double output1;
  double output2;

  printf("Please enter a positive integer: ");
  scanf("%d", &integer);

  outputFile = fopen(OUTPUTFILE, "w");

  if (outputFile != NULL) {
    fprintf(outputFile, "%s", HEADER);

    for (row = 1; row <= integer; row++) {
      output1 = (factor * PI) / integer;
      output2 = sin(output1);

      fprintf(outputFile, "%.3lf %.4lf\n", output1, output2);

      factor++;
    }

    fclose(outputFile);
  }

  else
    printf("Error");

  return 0;
}