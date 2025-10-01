#include <stdio.h>

 void toh (int,int,int,int);
 int count=0;



 void toh (int n,int a, int b,int c) {


    if (n>0){

        toh(n-1,a,c,b);

        printf("%d --> %d\n",a,c);

        toh(n-1,b,a,c);
          count++;

    }



}

 void main(){

 int n;

 while(1){

 printf("enter disk or 0 to exit:");
 scanf("%d",&n);

 toh(n,1,2,3);

 printf("count=%d\n",count);
 count=0;

 if(n==0){

    break;
 }

 }

 }


