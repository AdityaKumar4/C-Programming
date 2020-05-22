#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the no of which you want to check");
	scanf("%d %d %d" ,&a,&b,&c);
	if (a>b)
	{
		if(a>c)
		{printf("The greatest no is %d",a);
		}
		else
		{printf("The greatest no is %d",b);
		}
	}
	else
	{
		if(b>c) 
		{printf("The greatest no is %d",b);
		}
		else
		{printf("The greatest no is %d",c);
		}
	}
}
