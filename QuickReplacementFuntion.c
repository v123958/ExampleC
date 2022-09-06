#include <stdio.h>

void fun1(int a);
void fun2(int a, int b);

#define fun1(fwversion) fun2(fwversion, -1)

int main(void)
{
	fun1(5);
	//fun2(1, 2);	
	
    return 0;
}

void fun2(int a, int b)
{	
	printf("fun2 a: %d, b: %d\n", a, b);
}
