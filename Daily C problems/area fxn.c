#include<stdio.h>



int main()
{
	int l, b, area;
	
	printf("Enter the lenght and breath of the rectangle : ");
	scanf("%d %d", &l , &b);
	
	area=areaofrect(l, b);
	 printf("The area is %d", area);
}


int areaofrect(int length, int breath)
{
	int area;
	
	area= length*breath;
	return area;
}

