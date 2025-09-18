#include <stdio.h>

void main(void)

{
    int number[10];
    int i,sum=0,x;
    float avg;

    printf("Enter number to find average :");
    scanf("%d",&x);

    for(i=0;i<x;i++){

        printf("Enter number %d = ",i+1);
        scanf("%d",&number[i]);
        sum=sum+number[i];
    }
    avg=sum/x;
    printf("Average %f = ",avg);
}
