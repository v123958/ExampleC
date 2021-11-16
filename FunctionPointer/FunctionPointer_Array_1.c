#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test_1(void) 
{ 
	printf("test_1\r\n"); 
}

void test_2(void) 
{ 
	printf("test_2\r\n"); 
}

void test_3(void) 
{
	printf("test_3\r\n"); 
}

int main(int argc, char **argv)
{
	int i;
	void (*command[])(void) = {test_1, test_2, test_3};
	
	for(i=0; i<3; i++)
	{
		command[i]();
	}

	system("PAUSE");
    return 0;
}
