#include<stdio.h>

char arr[5];
int head=0;

int push()
{
	
	if(head<4)
	{
		head++;
		printf("Enter      ");
		scanf("%d",&arr[head]);
	}
	else
	{
		printf("The stack is full");
	}
}

int pop()
{
	if(head>=0)
	{
		arr[head]=NULL;
		head--;
	}
	else
	{
		printf("The stack is empty");
	}

}

int main()
{
	int i;
	int g=2;
	char c='x';
	
	while(g==2)
	{
		printf("Enter the command   ");
		scanf("%c",&c);
		
		switch(c)
		{
			case 'u':
			{
				push();
				break;
			}
			case 'o':
			{
				pop();
				break;
			}
		}
		
				
		for(i=0; i<=head; i++)
		{
			printf("%c",arr[i]);
		}
	}
	return 0;
}
