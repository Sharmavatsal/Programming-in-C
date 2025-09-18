#include <stdio.h>

void main(void)
{
    int a,x=0,y=1,z,i;
    printf("Enter a number : ");
    scanf("%d",&a);
    z=x+y;
    printf("Fabonacci series = %d + %d + %d ",x,y,z);
    for (i=1;i<=a;i++)
    {
        x=y;
        y=z;
        z=x+y;

        printf(" + %d",z);
    }
}
