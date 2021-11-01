#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]); 
int length(char str[]);

int main() 
{
	char str[100]; 
	
	printf("Input string:"); 
	gets(str); 
	reverse(str);
	 
	printf("Result:"); 
	puts(str);
	
	system("PAUSE"); 	
	return 0;
}

void reverse(char str[])
{
	int i,l=length(str);
	char ch;
	
 	for(i = 0; i < l/2; i++)
	{
		ch = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = ch;
    }
}
int length(char str[])
{
	 int i=0,cnt=0;
	 
	 while(str[i++]!='\0')
	 {	
	 	 cnt++; 
	 }
	 
	 printf("Length: %d\n", cnt); 
	 return cnt;
}
