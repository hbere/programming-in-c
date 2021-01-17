#include <stdio.h>
#include <math.h>

/* This program will give a set of instructions to solve an n-disk
 * Tower of Hanoi problem. */

int main ( )
{

	int disks;
	int startPeg;
	int endPeg;
	int holdingPeg;
	int movement;
	int s[];
	int f[];

	printf( "# of disks? " );
	scanf ( "%d", &disks );

	printf( "Starting peg (1, 2, or 3) ? " );
	scanf( "%d", &startPeg );

	printf( "Ending peg (1, 2, or 3) ? " );
	scanf( "%d", &endPeg );

	holdingPeg = 6 - startPeg - endPeg;

	movement = disks + pow (2, disks - 1);



	return 0;

}




