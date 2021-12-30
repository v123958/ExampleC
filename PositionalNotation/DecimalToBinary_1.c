#include <stdio.h>

int main()
{
    int wInput,i,a[100];
    
	scanf("%d",&wInput);

    i=0;
    while(wInput > 0)
    {
        a[i] = wInput % 2;
        printf("a[%d]: %d\n", i, a[i]);
            
        wInput /= 2;
        printf("n2: %d\n\n",wInput);
            
        i++;
    }
        
    for(i--; i>=0; i--)
        printf("%d",a[i]);
    printf("\n");
        
    return 0;
}
