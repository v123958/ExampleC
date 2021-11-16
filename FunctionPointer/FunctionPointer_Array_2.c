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

#if 1
typedef struct
{
	int cmd;
	void (*function)(void);
	int parameter;	
}FUNCTION_STRUCT_1;
#else
struct FUNCTION_STRUCT_2
{
	int cmd;
	void (*function)(void);
	int parameter;	
};
#endif

int main(int argc, char **argv)
{
	int i;	

#if 1	
	FUNCTION_STRUCT_1 functionTable[]=
	{
		{4, test_1, 0},
		{5, test_2, 0},
		{6, test_3, 0}
	};	
#else	
	struct FUNCTION_STRUCT_2 functionTable[]=
	{
		{4, test_1, 0},
		{5, test_2, 0},
		{6, test_3, 0}
	};
#endif
	
	for(i=0; i<7; i++)
	{
		if(functionTable[i].cmd == 4)
		{
			functionTable[i].function();
		}
		else if(functionTable[i].cmd == 5)
		{
			functionTable[i].function();
		}	
		else if(functionTable[i].cmd == 6)
		{
			functionTable[i].function();
		}			
	}

	system("PAUSE");
    return 0;
}
