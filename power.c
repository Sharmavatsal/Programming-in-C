#include <stdio.h>

void main(void)
{
    int i,b,p,ans;
    printf("Enter the base: ");
    scanf("%d",&b);

    printf("Enter the power: ");
    scanf("%d",&p);

    ans=b;

    for(i=1;i<p;i++)
    {
        ans=ans*b;
    }
    printf("Answer = %d",ans);
}
