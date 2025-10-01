// DMA

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, int argv[]){

    int n, *p, sum=0;
    float avg;

    printf("How many numbers you want to store ? :  ");
    scanf("%d",&n);

    p = (int*) malloc(sizeof(int)*n);

    for (int i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d",(p+i));
    }

    for (int i=0;i<n;i++){

        sum += *(p+i);
    }


    printf("Sum = %d\n",sum);

   avg = (float)sum/n;

   printf("average = %f",avg);
}
