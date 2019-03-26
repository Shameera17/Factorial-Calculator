#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,fact=1;
    printf("Enter a number to calculate the factorial\n\n");
    scanf("%d",&x);
    printf("\n");

    for(i=1; i<=x; i++)
    {
        fact*=i;
        printf("%d ",i);
        if(i<x)
        {
            printf("* ");
        }
    }
    printf("\n\nFactorial : %d\n",fact);
    return 0;
}
