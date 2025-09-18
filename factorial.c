#include <stdio.h>

void main(void)
{
    int x,i,z;

    printf("Enter a number: ");
    scanf("%d",&x);

    z=x;

    for(i=1;i<x;i++){

        z=z*(x-i);
    }

    printf("Factorial is %d ",z);


}
