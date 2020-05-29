#include<stdio.h>


int addition(int, int);

int main()
{
	int a, b, i, n, m;
	
	printf("Enter the no of elements in array : ");
	scanf("%d", &n);
	int arr1[n];
	int arr2[n];
	int sum[n];
	
	printf("Enter the elements in array 1 : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter the elements in array 2 : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	for(i=0; i<n; i++)
	{
		m=addition(arr1[i], arr2[i]);
		sum[i]=m;
	}
	
	printf("The sum array is : ");
	for(i=0; i<n; i++)
	{	
		printf("  %d  ", sum[i]);
	}	
}

int addition(int x, int y)
{
	int s;
	s=x+y;
	return s;
}
