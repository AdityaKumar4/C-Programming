#include<stdio.h>
#include<stdlib.h>
#include<process.h>

#define MAX 9	
 
int top=-1;
int stack[MAX];
void push();
void pop();
void display();
 
void main()
{
	int ch;
	
	while(1)	
	{
		printf("\nChoose one of the following options:");
		printf("\n1.Push\t2.Pop\t3.Display");
		printf("\nEnter your choice(1-3):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			
			
			default: printf("\nWrong Choice!!");
		}
	}
}
 
void push()
{
	int val;
	
	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
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
		printf("\nDeleted element is %d",stack[top]);
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
			printf("%d\n",stack[i]);
	}
}
