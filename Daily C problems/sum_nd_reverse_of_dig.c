#include <stdio.h>

int main()
{
    void sumd(int );
    void rev(int );
    int n;
    printf("Enter a 2 digit number:");
    scanf("%d",&n);
    sumd(n);
    rev(n);
    return 0;
}
void sumd(int n)
{
    int sum;
    sum = n%10 +n/10;
    printf("\n The sum is %d: \n",sum);
    
}
void rev(int n)
{
    int num;
    num = (n%10)*10 + n/10;
    printf("the reversed number is: %d",num);
}
