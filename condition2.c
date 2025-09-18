#include <stdio.h>

void main(void)
{
    int y;

    printf("Enter any year:");
    scanf("%d",&y);

    if(y%4==0 && y%400==0){
        printf("It is a leap year");

    }
    else{
        printf("It is not a leap year");
    }
}

