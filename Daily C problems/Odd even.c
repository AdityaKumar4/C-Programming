#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the no of which you want to check");
	scanf("%d" ,&a);
	b=a%2;
	if (b==1)
	{
	printf("The no is odd");
	}
	else 
	{
	printf("the no is even");
	};
}
