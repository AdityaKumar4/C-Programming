 #include<stdio.h>
 
 int main()
 {
 	int i, j, k, l, n;
 	
 	printf("Enter how many rows you want to enter : ");
 	scanf("%d", &n);
 	
 	for(i=0, j=n; i<=n; i++, j--)
 	{
 		for(k=j; k>0; k--)
 		{
 			printf(" ");
		 }
		
		for(l=0; l<2*i+1; l++)
		{
			printf("*");
		}
		
		printf("\n");
	 }
 }
