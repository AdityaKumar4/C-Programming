#include<stdio.h>


void even(int );
void odd(int );


void main()
{
	int n=1; 
	
	odd(n);
}

void even(int n)
{
	if(n<11)
	{
		printf("%d", n-1);
		n++;
		odd(n);
	}
	else
	{
		printf("\n The task is completed");
	}
}

void odd(int n)
{
	printf("%d", n+1);
	n++;
	even(n);
}
