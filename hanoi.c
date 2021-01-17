#include <stdio.h>

/* This program is designed to solve the Towers of Hanoi problem
 * for n disks. */

/* recursive function finds steps to solve Towers of Hanoi problem */
void hanoi ( int d, int s, int e, int h );

int main ()
{

  int disks; /* number of disks */
  int startPeg; /* starting peg */
  int endPeg; /* ending peg */
  int holdingPeg; /* storage peg 8 */

  printf( "# of disks? " );
  scanf ( "%d", &disks );

  printf( "Starting peg (1, 2, or 3) ? " );
  scanf( "%d", &startPeg );

  printf( "Ending peg (1, 2, or 3) ? " );
  scanf( "%d", &endPeg );

  holdingPeg = 6 - startPeg - endPeg;

  /* variables are sent to function for algorithm calculation */
  hanoi ( disks, startPeg, endPeg, holdingPeg );

  return 0; /* indicated successful termination */

}


void hanoi ( int d, int s, int e, int h )
{
 
  /* base case */
  if ( d == 1 ) {
    printf( "%d -> %d\n", s, e );
  }
  else { /* recursive step */
    hanoi ( d - 1, s, h, e );
    hanoi ( 1, s, e, h );
    hanoi ( d - 1, h, e, s);
  }

}
