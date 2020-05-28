#include<stdio.h>

int main()
{
	int number, i, q, t, sum=0, r, mul=1, terms=0;
	
	printf("Enter the no which you want to check : ");
	scanf("%d", &number);
	q=number;
	

	while(q!=0)
	{
		terms=terms+1;
		q=q/10;
	}
	q=number;
	t=terms;
	
	for(i=0; i<terms; i++)
	{
		mul=1;
		t=terms;
		r=q%10;
		
		while(t!=0)
		{
			mul=mul*r;
			t--;
		}
		sum=sum+mul;
		q=q/10;
	}
	printf("\n\n total sum is %d \n", sum);
	

	if(sum==number)
	{
		printf("The no is armstrong");
	}
	else
	{
		printf("The no is not armstrong");
	}
}
