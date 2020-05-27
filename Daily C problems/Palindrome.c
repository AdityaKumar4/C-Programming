#include<stdio.h>

int main()
{
	int result, n, q, r;
	
	result=0; 
	printf("Enter the no you want to check : ");
	scanf("%d", &n);
	q=n;
	
	while(q!=0)
	{
		r=q%10;
		result=result*10+r;
		
		q=q/10;
	}
	
	if(n==result)
	{
		printf("the no is palindrome");
	}
	else
	{
		printf("the no is not palindrome");
	}
}
