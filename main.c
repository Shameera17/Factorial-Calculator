#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    char conf;
    long long fact=1;   // to output a big value

    while(1) {
        printf("\nEnter a number to calculate the factorial: ");
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

        printf("\n\n%d! = %lld\n", x, fact);

        printf("\nDo you want to exit [y/n]: ");
        scanf("%s", &conf);

        fact = 1;   // to avoid duplicating

        if(conf == 'Y' || conf == 'y')
            break;
        else
            continue;
    }

    return 0;
}
