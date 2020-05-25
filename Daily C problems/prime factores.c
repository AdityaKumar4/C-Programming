#include<stdio.h>
#include<math.h>

int main()
{
    void PrimeFactors(int );
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    PrimeFactors(n);
    return 0;
}

void PrimeFactors(int n)
{
    
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
    
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
    
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    
    if (n > 2)
        printf ("%d ", n);
}
