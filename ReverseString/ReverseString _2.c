#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]); 
int length(char str[]);

int main() 
{
	int i, j = 4;
	char tmp;
	char str1[] = {'a', 'b', 'c', 'd', 'e'};
	char str2[5];
	
	for(i = 0; i < 5/2; i ++)
	{
		tmp = str1[i];		
		str1[i] = str1[j];		
		str1[j--] = tmp;
	}	

	for(i = 0; i < 5; i ++)
		printf("%c\n", str1[i]);
	
	system("PAUSE"); 	
	return 0;
}
