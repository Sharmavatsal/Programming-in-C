#include <stdio.h>
void main(void){
int i,n;
float ans;
int sum=0;


printf("Enter no of Array you want : ");
scanf("%d",&n);
int arr[n];

for (i=0;i<n;i++){
    printf("Enter Array %d : ",i+1);
    scanf("%d",&arr[i]);
}

for (i=0;i<n;i++){

    printf("%d\n",arr[i]);
}

int lowest = arr[0];
int highest = arr[0];

for (i=0;i<n;i++){

    if(lowest>arr[i]){
        lowest = arr[i];
    }

    if (highest<arr[i]){

        highest = arr[i];
    }

    sum = sum + arr[i];
}



printf("Sum of all Array is : %d\n",sum);

ans = (float) sum/n;

printf("Average of Array : %f\n",ans);

printf("Highest value among all : %d\n",highest);

printf("Lowest value among all : %d\n",lowest);



}
