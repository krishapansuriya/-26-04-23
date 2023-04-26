#include<stdio.h>
main()
{
	int X=16,Y=10,XY;
	XY=(X*X*X)+(3*X*X*Y)+(3*X*Y*Y)+(Y*Y*Y);
      printf("X+Y=%d",XY);
	XY=(X*X*X)-(3*X*X*Y)+(3*X*Y*Y)-(Y*Y*Y);
	printf("\nX-Y=%d",XY);	
      
}
