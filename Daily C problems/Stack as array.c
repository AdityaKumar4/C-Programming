#include<stdio.h>


int top=-1;
int arr[5];
void push();
void pop();
void display();

int main()
{
	int n=5, c;
	
	while(2)
	{
		printf("\nChoose one of the following options:");
		printf("\n1.Push\t2.Pop\t3.Display");
		printf("\nEnter your choice(1-3): ");
		scanf("%d", &c);
		switch (c)
		{
			case 1:
				push();
				break;
		
			case 2:
				pop();
				break;
				
			case 3:
				display();
				break;
				
			default :
				printf("The command is not valid");
				break;
		}
	}
}

void push()
{
	int val;
	
	if(top==4)
	{
		printf("\nStack is full!!");
		return;
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		arr[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",arr[top]);
		top=top-1;
	}
}
 
void display()
{
	int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack current condition\n");
		for(i=top;i>=0;--i)
			printf("%d\n",arr[i]);
	}
}
