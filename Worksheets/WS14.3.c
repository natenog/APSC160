#include <stdio.h>
#include <stdlib.h>

/*
Purpose: Prints a row of stars of a given length.
Parameter: length - length of the row of stars in characters
Returns: 
*/

char drawRow(int length) {
  int count = 0;
  char star = '*';
  char row;

  while (count < length) {
    row = printf("%c", star);
    count++;
  }

  return row;
}