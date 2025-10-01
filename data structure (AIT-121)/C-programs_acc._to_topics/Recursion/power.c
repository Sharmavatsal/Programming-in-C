#include <stdio.h>

int ans = 1;
void power (int b,int p);
void power (int b,int p)
{


    int n = 1;
    if(n<=p){
        ans = ans*b;
        power (b,p-1);
    }
}
    void main ()
    {
        int b,p;

        printf("Enter base : ");
        scanf("%d",&b);

        printf("Enter power : ");
        scanf("%d",&p);
        power(b,p);

        printf("%d\n",ans);
    }


