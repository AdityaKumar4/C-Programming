#include <stdio.h>

int main()
{
    void suml(int );
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    suml(n);
    return 0;
    
}

void suml(int n)
{
    int sum=0;
    int a;
    for(int i=1;i<=n;i++){
        printf("The new term is");
        scanf("%d",&a);
        sum+=a;
    }
    printf("The sum is %d",sum);
}
