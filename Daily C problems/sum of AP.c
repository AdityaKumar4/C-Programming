#include <stdio.h>

int main()
{
    void ap(int ,int, int);
    int a,d,n;
    printf("Enter the value of a,d,n");
    scanf("%d %d %d",&a,&d,&n);
    ap(a,d,n);
}
void ap(int a, int d, int n)
{
    int sum;
    sum = (n/2)*(2*a+(n-1)*d);
    printf("The sum of AP is %d",sum);
}
