#include<stdio.h>


int factorial(int);

int main()
{
	int n, fact;
	
	printf("Enter the no : ");
	scanf("%d", &n);
	
	fact=factorial(n);
	printf("The factorial is : %d", fact);
	
	return 0;
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		printf("Hold on %d\n", n);
		return n*factorial(n-1);
	}
}
