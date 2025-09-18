#include <stdio.h>

void main(void)
{
    int x;

    printf("Enter, no.of stars you want to print:");
    scanf("%d",&x);

    for(int i=x;i>=1;i--){
        for(int j=1;j<=i;j++){

            printf("*");
        }

        printf("\n");

    }
}
