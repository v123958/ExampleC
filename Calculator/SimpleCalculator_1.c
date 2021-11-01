#include <stdio.h>
#include <stdlib.h>
int power(int); //power 10

int main() 
{
	char x[20]={0};
	int a,b,c,i,j,k=0,y=0,z=0;
	gets(x);
	
	/*Judge the location of +-*/
	for(i=0;i<20;i++)
	{
		if(x[i]==0x2B)
		{
			printf("i1=%d\n\n",i);  //i=3 
			break;	
		}	
	}
	
	/*save the location of +, z = 3*/
	z=i;	
	k=i-1;	
	for(j=0;j<i;j++) 
	{		
		c=power(k);
		printf("c=%d\n\n",c);
			
		/*The first number*/
		y=y+((*(x+j)-0x30)*c);
		k--;
	}
/////////////////////////////////////////////////////////
	
	/*Fine end location*/
	for(i=0;i<20;i++)
	{
		if(x[i]==0x00)
		{
			printf("i2=%d\n\n",i);  //i=5 
			break;	
		}	
	}
	
	k=i-z-2;	
	for(j=z+1;j<i;j++) 
	{		
		c=power(k);
		y=y+((*(x+j)-0x30)*c);	   
		k--;
	}	
	
	printf("y=%d\n\n",y); //answer
	
	system("PAUSE"); 	
	return 0;
}


int power(int k)
{
	int m=0,p=1;
	
	for(m=k;m>0;m--)
			{
				p=p*10;
				printf("p1=%d\n\n",p);
			}	
			printf("p2=%d\n\n",p);
	return p;
}
