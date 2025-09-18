#include <stdio.h>

void main(void)
{
    float x;


    printf("Enter X:");
    scanf("%f",&x);

    if(x>0 && x<100){
        printf("Entered value is a number");
    }
    else if(x>100){
        printf("\a another number");
    }
    else
        printf("error");
}
