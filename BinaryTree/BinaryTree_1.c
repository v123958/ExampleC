#include <stdio.h>
#include <stdlib.h>

#define Num 20

void CreateBinaryTree(int*, int);
void Postorder(int);
void Inorder(int);
void Preorder(int);

int data[Num]={0};
int BinaryTree[Num]={0};

int main(void) {
    int n;
    int i;
    
    printf("Enter the number of the node¡G");
    scanf("%d", &n);
    printf("Enter the content of the node¡G\n", n);    
    for (i=0; i<n; i++) 
       scanf(" %d", &data[i]);       

    CreateBinaryTree(data, n); 
    printf("Preorder¡G\n");
    Preorder(1);
    printf("\n");
    
    printf("Inorder¡G\n");
    Inorder(1);
    printf("\n");
    
    printf("Postorder¡G\n");
    Postorder(1);
    printf("\n");
    
    system("PAUSE");
    return 0;
    }

void CreateBinaryTree(int data[], int n) 
{
    int node=1, temp;
    int i;
    
    for (i=0; i<Num; i++)
	{
	BinaryTree[i]=0;
	}
	
    for (i=0; i<n; i++) 
	{
        BinaryTree[node]=data[i];
        node=node + 1;
    }
}

void Postorder(int node) 
{   //«á§Ç°lÂÜ
	if (BinaryTree[node] != 0) 
	{
		Postorder(2*node); 
		Postorder(2*node+1);
		
		if (BinaryTree[node] != 0) 
		{  //¦C¦L¾ð®Ú
             printf("%d ",BinaryTree[node]);
    	}
    }
}

void Inorder(int node) 
{
	if (BinaryTree[node] != 0) 
	{
		Inorder(2*node);
        
		if (BinaryTree[node] != 0) 
		{
			printf("%d ", BinaryTree[node]);
        }
        
		Inorder(2*node+1);    
    }
}

void Preorder(int node)
{
	if (BinaryTree[node]!=0) 
	{
		if (BinaryTree[node]!=0) 
		{
			printf("%d ",BinaryTree[node]);
		}
		
		Preorder(2*node);
		Preorder(2*node+1);
	}
}

