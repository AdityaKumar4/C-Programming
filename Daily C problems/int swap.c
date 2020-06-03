#include<stdio.h>

int main()
{
	int x, y, z;
	
	x=9;
	y=6;
	
	printf("The x, y are %d, %d\n", x,y);
	
	z=x;
	x=y;
	y=z;
	printf("Now the values are %d, %d", x, y);
}
