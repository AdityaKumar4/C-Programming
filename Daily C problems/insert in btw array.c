#include<stdio.h>


int main()
{
	int i, j, pos, val, n;

	printf("Enter the no of terms you want to have in your arary  ");
	scanf("%d", &n);	
	int array[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter term %d : ", i+1);
		scanf("%d", &array[i]);
	}
	
	printf("\nThe given array is \n");
	for(j=0; j<n; j++)
	{
		printf("\t %d", array[j]);
	}
	
	printf("\nNow where do you want to insert the new no.\n");
	scanf("%d", &pos);
	
	printf("What no do you want to insert");
	scanf("%d", &val);
	
	int new_array[n+1];
	
	for(i=0; i<pos-1; i++)
	{
		new_array[i]=array[i];
	}
	
	new_array[pos-1]=val;
	
	for(i=pos; i<n+1; i++)
	{
		new_array[i]=array[i-1];
	}
	
	printf("The new array is :\n");
	for(j=0; j<n+1; j++)
	{
		printf("\t %d", new_array[j]);
	}
	
	return 0;
}
