#include <stdio.h>

int main()
{
    int fact(int );
    int n,ans;
    printf("Enter the number");
    scanf("%d",&n);
    ans = fact(n);
    printf("The factoiral of %d is %d:",n,ans);
}
int fact(int n)
{
    int facto=1;
    for(int i=1;i<=n;i++)
    {
        facto *= i;
    }
    return facto;
}
