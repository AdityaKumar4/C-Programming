#include<stdio.h>
#include<math.h>
int main()
{
    int powe(int ,int );
    int a,b;
    printf("Enter the value of a and b respectively:");
    scanf("%d %d",&a,&b);
    powe(a,b);
    return 0;
}
int powe(int a ,int b)
{
    int ans;
    ans = pow(a,b);
    printf("The answer is: %d",ans);
    return 0;
}
