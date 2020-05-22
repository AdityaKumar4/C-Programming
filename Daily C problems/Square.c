#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the no of which you want to get squared");
	scanf("%d",&a);
	
	if (a>10)
	{
	b=a*a;
	printf("The square is %d", b);
	}
	else 
	{
	printf("the no is %d", a );
	};
}
