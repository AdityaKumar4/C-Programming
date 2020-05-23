#include<stdio.h>
void main()
{
	int i, n, k=0, s;
	printf("Enter the no to which you want ");
	scanf("%d" ,&n);

	for(i=0; i<n; i++)
	{
		k=k+1;
		if(k%2==0)
		{s=s+k;}
		else
		{s=s;};
	};
	printf("%d",s);
}
