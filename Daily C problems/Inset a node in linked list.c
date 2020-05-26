#include<stdlib.h>
#include<stdio.h>

struct node 
{
	int data;
	struct node* next;
};
struct node* head;

void Insert(int x)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void Print()
{
	struct node*temp=head;
	printf("List is ");
	
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	int n, x, i;
	head=NULL;
	
	printf("How many numbers \n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter the no. \n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
}
