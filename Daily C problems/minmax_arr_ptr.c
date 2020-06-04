#include<stdio.h>

void MaxMin();

int main()
{
	int len;
	int arr[]={23, 45, 6, 98, 67, 1, 689, 231, 999, -2};
	
	int min, max;
	len=sizeof(arr)/sizeof(arr[0]);
	
	MinMax(arr,len, &min, &max);
	
	printf("The max value of the array is %d\n", max);
	printf("The min value of the array is %d\n", min);
}

void MinMax(int arr[], int len, int *min, int *max)
{
	int i;
	
	*min=*max=arr[0];
	
	for(i=1; i<len; i++)
	{
		if(arr[i]<*min)
			*min=arr[i];
		if(arr[i]>*max)
			*max=arr[i];
	}
}
