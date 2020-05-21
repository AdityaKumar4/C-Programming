#include<stdio.h>
void main()
{
	int i, n, a=0, b=1, c;
	printf("Enter the no to which you want ");
	scanf("%d" ,&n);
	printf("%d  ",a);
	printf("%d  ",b);
	for(i=0; i<n; i++)
	{
		c=a+b;
		printf("%d  ",c);
		
		a=b;
		b=c;
	};
}
