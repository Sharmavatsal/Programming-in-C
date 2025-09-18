#include <stdio.h>

void main(void)
{
    int i,j,k;

    for(i=1;i<=100;i++)
    {
        k=0;

            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    k++;
                }
            }
            if(k==2)
            {
                printf("%d is a prime number.\n",i);
            }
    }
}
