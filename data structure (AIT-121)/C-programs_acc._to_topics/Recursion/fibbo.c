#include <stdio.h>

 void fibo(int a,int b,int f);
void fibo(int a,int b,int f){

if(f==0){

    return;
}
 int c=a+b;
 printf("%d\n",c);
 fibo(b,c,f-1);
}
void main(){


int a=0;
int b=1;
int f;

 printf("enter a number=");
 scanf("%d",&f);

printf("%d\n",a);
printf("%d\n",b);

 fibo(a,b,f-1);
 }


