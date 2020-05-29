#include<stdio.h>
#include<math.h>
int main()
{	
	int number, root, i, flag=0, rem;
	
	printf("Enter the no you want to check : ");
	scanf("%d", &number);
	root=sqrt(number);
	printf("The root is : %d\n\n", root);
	root=root+1;
	
	for(i=2; i<root; i++)
	{
		rem=number%i;
	
		if(rem==0)
		{
			flag++;
			break;
		}
	}
	
	if(flag==0)
	{
		printf("The no is prime");
	}
	else
	{
		printf("The no is not prime");
	}
}
