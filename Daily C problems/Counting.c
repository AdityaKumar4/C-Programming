#include<stdio.h>
void main()
{
	int i, n;
	int j=0;
	printf("Enter the no to which you want the no");
	scanf("%d" ,&n);
		
	for(i=0; i<n; i++)
	{
		j=j+1;
		printf("%d",j);
	};
}
