#include <stdio.h>
#include <stdlib.h>

void addatend(int);
void addatstart(int);
void addinbetween(int);
void display();

struct node 
{
    int data;
	struct node*next; 
};

struct node *start;
int data1, data2;

void addatend(int info)
{

	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = info;
	newnode -> next = NULL;
	struct node *temp;
	temp = start;
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = newnode;
}

void addatstart(int info)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = info;
	newnode -> next = start;
	start = newnode;
}

void addinbetween(int info)
{
	
}

int main()
{
	
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = 7;
	newnode -> next = NULL;
	start = newnode;
	
	printf("Enter data for end of the list \n");
	scanf("%d",&data1);
	
	addatend(data1);
	display();
	
	printf("Enter data for end of the list \n");
	scanf("%d",&data1);
	
	addatend(data1);
	display();
	
	printf("Enter data for the start the list \n");
	scanf("%d",&data2);
	
	addatstart(data2);
	display();
	
	return 0;
}

void display()
{
	struct node *temp = start;
	temp = start;
	while (temp != NULL)
	{
		printf(" Data %d Next address %d \n", temp -> data, temp -> next);
		temp = temp -> next;
	}
}