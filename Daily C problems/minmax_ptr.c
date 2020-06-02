#include<stdio.h>

void minmax();


int main()
{
	int arr[]={15,26,78,42,14,36,0,99};
	int min, max;
	int len=sizeof(arr)/sizeof(arr[0]);
	
	minmax(arr, len, &min, &max);
	
	printf("The max element of the array is %d \nThe min element of the array is %d", max, min);
	return 0;
}

void minmax(int arr[], int len, int *max, int *min)
{
	int i;
	*min=*max=arr[0];
	
	for(i=1; i<len; i++)
	{
		if(arr[i]>*max)
			*max=arr[i];
		if(arr[i]<*min)
			*min=arr[i];
	}
}
