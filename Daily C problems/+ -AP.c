#include<stdio.h>
void main()
{
	int i, n, k=1;
	printf("Enter the no to which you want the no to be started of ");
	scanf("%d" ,&n);
	for(i=0; i<n; i++)
	{
		printf("%d \n",k);
		k=k*-1;
		
		if (k<0)
		{k= k-3;
		}
		else
		{k=k+3;
		};
	};
}
