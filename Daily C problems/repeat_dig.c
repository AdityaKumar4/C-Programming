#include<stdio.h>


int repeat(int );

int main()
{
	int n, sol;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	
	sol = repeat(n);
	
	if(sol!=0)
	{
		printf("The no has repeated digits");
	}
	else
	{
		printf("The no has no repeated digits");
	}
}

int repeat(int n)
{
	int terms=0, flag=0;
	int t, q, r, i, j;
	q=n;
	
	while(q!=0)
	{
		q=q/10;
		terms++;
	}
	t=terms;
	q=n;
	
	int arr[t];
	for(i=0; i<t; i++)
	{
		r=q%10;
		arr[i]=r;
		q=q/10;
	}
	
	for(i=0; i<t; i++)
	{
		printf("\n%d\n", arr[i]);
	}
	
	for(i=0; i<t; i++)
	{
		for(j=i+1; j<t; j++)
		{
			if(arr[i]==arr[j])
			{
				flag++;
				break;
			}
		}
		if(flag!=0)
		{
			break;
		}
	}
	
	return flag;
}
