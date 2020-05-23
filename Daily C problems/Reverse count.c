#include<stdio.h>
void main()
{
	int i, n, j;
	printf("Enter the no to which you want the no to be started of ");
	scanf("%d" ,&n);
	j=n;	
	for(i=n; i>0; i--)
	{
		j=j-1;
		printf("%d",j);
	};
}
