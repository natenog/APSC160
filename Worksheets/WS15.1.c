#include <stdio.h>
#include <stdlib.h>

void printChars(int length, char symbol);

int main( void ) {
  char character;
  int size;
	int row = 0;
	
	printf( "Enter size of square and a character: " );
	scanf( "%d", &size);
	
	while( row < size ) {
    printChars( size, '*' );
    printChars( size, '.' );
    printf( "\n" );
    row++;
	}
	
	system( "PAUSE" );
  return 0;
}

void printChars(int length, char symbol) {
  int counter = 0;
  char star = '*';
  char dot = '.';

  if (symbol) {
    while (counter < length) {
      printf("%c", symbol);
      counter++;
    }
  }

  else {
    while (counter < length) {
      printf("*");
      counter++;
    }
    counter = 0;
    while (counter < length) {
      printf(".");
      counter++;
    }
  }
}