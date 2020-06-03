#include<stdio.h>


void swap();


void main()
{
	int a=1, b=2, c=3;
	int *p=&a, *q=&b, *r=&c;
	
	
	swap(a,b,p,q);
	printf("A nd B are : %d, %d\n\n", *p, *q);
	
	swap(b,c,q,r);
	printf("B nd C are : %d, %d\n\n", *q, *r);
	printf("The value of A, B, C is : %d, %d, %d\n", *p, *q, *r);
}

void swap(int j, int k, int *x, int *y)
{
	printf("X nd Y are : %d, %d\n", *x, *y);
	*y=j;
	*x=k;
	printf("X nd Y are : %d, %d\n", *x, *y);
}
