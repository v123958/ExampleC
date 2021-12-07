#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a = 12345, b;
	
	while(a != 0)
	{
		b = a % 10;		
		a = a / 10;
		
		printf("%d\n", b);
	}
	
	system("PAUSE");
    return 0;
}

