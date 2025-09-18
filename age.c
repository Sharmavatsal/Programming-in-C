#include <stdio.h>

void main(void)
{
    int a;

     printf("Enter your age:");
    scanf("%d",&a);

    if(a<18){
        printf("user is minor");

    }
    else if(a>=18 && a<60){
        printf("user is adult");
    }
    else{
        printf("user is senior citizen");
    }
}
