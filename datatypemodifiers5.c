#include <stdio.h>

void main(void)
{
    int x;
    int y;
    int ans;

    printf("Enter X:");
    scanf("%d",&x);

    printf("Enter Y:");
    scanf("%d",&y);

    ans=x/y*x+y-y;

    printf("Answer=%d",ans);

}
