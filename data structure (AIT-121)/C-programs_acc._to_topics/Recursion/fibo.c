#include <stdio.h>

int a = 0,b = 1,c = 1;

void fibo (int x,int n);
void fibo (int x,int n){

    if (x<=(n-3)){
        a=b;
        b=c;
        c=a+b;

        printf("+ %d ",c);
        fibo(x+1,n);
    }
}
void main()
{
    int n,x=1;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Fibonacci series = %d + %d + %d",a,b,c);
    fibo(x,n);
}
