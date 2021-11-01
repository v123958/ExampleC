#include <stdio.h>
#include <stdlib.h>
 
struct Node{
	int data;
	struct Node *next;
};

typedef struct Node Stack_Node;
typedef Stack_Node *Linked_Stack;
Linked_Stack top = NULL;

int isEmpty();
void push(int); 
int pop();
 
int main(int argc, char *argv[]) 
{
	int value;
	int i;
	printf("Input 5 row data:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&value);
		push(value);
	}
	
	printf("--------------------\n");
	while(!isEmpty())
	{
		printf("The sequence of pop data: %d\n",pop()); 
	}
	
	pop();
	return 0;
}

int isEmpty()
{
	if(top == NULL)
		return 1; 
	else
		return 0;
} 

void push(int data)
{
	/*Create a new node*/
	Linked_Stack new_add_node;
	new_add_node = (Linked_Stack)malloc(sizeof(Stack_Node));	
	
	new_add_node->data = data;
	new_add_node->next = top;
	top = new_add_node;
} 

int pop()
{
	Linked_Stack deletePtr;
	int temp;
	
	if(isEmpty())
	{
		printf("Is Empty\n");
		return -1;
	}
	else
	{
		deletePtr = top;
		temp = deletePtr->data;
		top = top->next;
		free(deletePtr);
		return temp; 
	}
}
