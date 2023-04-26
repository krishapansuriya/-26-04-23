#include<stdio.h>
main()
{
	int X=16,Y=20,Z=10,XYZ;
	XYZ=(X*X*X)+(Y*Y*Y)+(Z*Z*Z)+(3*(X+Y))+(3*(Y+Z))+(3*(Z+X));
	printf("X+Y+Z=%d",XYZ);
	XYZ=(X*X*X)-(Y*Y*Y)-(Z*Z*Z)-(3*(X+Y))+(3*(Y+Z))+(3*(Z+X));
	printf("\nX-Y-Z=%d",XYZ);
}
