#include <stdio.h>

void main(void)
{
    char n;
    double n1;
    printf("Enter a character: ");
    scanf("%c",&n);

    printf("Enter your number:");
    scanf("%lf",&n1);

    printf("You have entered %c, \n   %lf",n,n1);

}
