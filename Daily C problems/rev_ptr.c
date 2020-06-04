#include<stdio.h>

int main()
{
	int x=9;
	
	int *ptr=&x;
	
	printf("The older x is %d", *ptr);
	
	*ptr=5;
	printf("The new value of x is %d", ptr);
	
	return 0;
}
