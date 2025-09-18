#include <stdio.h>

void main(void)
{
    int x,i;

    printf("Enter a number:");
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        if(i%2==0){
        printf("%d is even number\n",i);
        }

        else{

            printf("%d is odd number\n",i);
        }
    }
}
