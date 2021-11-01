#include <stdio.h>
#include <stdlib.h>

int Recursive(int n)
{
    if(n==1)
	    return 1;
    else
         return n*Recursive(n-1);
}

main()
{
     printf("%d\n",Recursive(3));
     system("PAUSE");
}
