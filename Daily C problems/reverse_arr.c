#include<stdio.h>

int main()
{
	int arr[]={2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int i;
	
	printf("The reverse order is : \n");
	for(i=0; i<10; i++)
	{
		printf("%d, ", arr[9-i]);
	}
	printf("\nDone");
}
