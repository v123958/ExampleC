#include <stdio.h>
#include <stdlib.h>

#define MAXSTACK 100

int stack[MAXSTACK];
int top=-1;
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
		scanf("%d", &value);
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

int isEmpty(){
	if(top == -1)
		return 1; 
	else
		return 0;
}

void push(int data)
{
	if(top >= MAXSTACK)
		printf("Is Full\n");	
	else
	{
		top++;
		stack[top]=data;
	}
 
} 

int pop()
{
	int data;
	
	if(isEmpty())
		printf("Is empty\n");
	else
	{
		data=stack[top];
		top--;
		return data; 
	}
}
