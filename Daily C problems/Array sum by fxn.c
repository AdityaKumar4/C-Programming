#include <stdio.h>

/*
 * Complete the simpleArraySum function below.
 */



int main()
{
    int i, n, sum;
    int arr[100];

    printf("Please enter the number of terms you want to get added  ");
    scanf("%d",&n);
  
  	int ArraySum(int n; int arr[100]);
    
    printf("Enter the terms you want to add  ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	sum=ArraySum(int n; int arr[100]);

	printf("The sum of the array is %d",sum);
    return 0;
}

int ArraySum(int n; int arr[100]) 
{
	int sum=0;
	for(i=0; i<n; i++)
	{
		sum=sum+arr[i];
		
	}

	return sum();
}
