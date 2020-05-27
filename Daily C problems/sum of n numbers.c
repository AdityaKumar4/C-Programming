#include <stdio.h>

int main()
{
    void sumn(int);
    int n;
    printf("The value of n:");
    scanf("%d",&n);
    sumn(n);
    return 0;
    
}
void sumn(int n)
{
    int sum;
    sum = (n*(n+1))/2;
    printf("The sum of first %d integers: %d",n,sum);
    
}
