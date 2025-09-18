#include <stdio.h>

void main(void)
{
    int x;




    printf("Enter any int x: ");
    scanf("%d",&x);



    if("x>=1 || x<=1000"){
        printf("The entered value is an int.\n",x);
        scanf("%d",&x);
}
    else {
    printf("The entered value is not an int.",x);
}



}
