#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    long long fact=1;

    printf("Enter a number to calculate the factorial: ");
    scanf("%d",&x);
    printf("\n\n%d! = ", x);

    for(i=1; i<=x; i++)
    {
        fact*=i;
        printf("%d ", i);

        if(i<x)
        {
            printf("x ");
        }
    }

    return 0;
}
