#include <stdio.h>
#include <stdlib.h>

int summax();
int summin();

int main()
{
    int arr[5];
    int i, k, sc, s, l, sx, si;

    sc=0;

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

	printf("LOL");

    for(i=0; i<5; i++)
    {
        for(k=0; k<5; k++)
        {
            if(arr[i]<=arr[k])
            {
                sc=sc+1;
            }
    	}	
      	if(sc==5)
     	{
    	   	s=arr[i];
     	    break; 
    	}
     	else
    	{
    	    sc=0;
   	    }
    }

    for (i = 0; i <5; i++) 
    {
      for (k = 0; k <5; k++) 
      {
        if (arr[i] >= arr[k]) 
        {
          sc = sc + 1;
        }
      }
      if (sc == 5) 
      {
        l = arr[i];
        break;
      } 
      else 
      {
        sc = 0;
      }
    }

    sx = summax(arr[5], s);
    si = summax(arr[5], l);

    printf("%d %d", si, sx);
    	printf("LOL2");
    return 0;
}

int summax(int arr[], int s)
{
    int i, sum;
    sum=-s; 
    for(i=0; i<5; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int summin(int arr[], int l) 
{
  int i, sum;
  sum=-l;
  for (i = 0; i < 5; i++) 
  {
    sum = sum + arr[i];
  }
  return sum;
}


