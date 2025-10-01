#include <stdio.h>

int ans = 1;

void fact (int f);
void fact (int f){

    int n = 1;
    if (n<=f){
        ans *= f;
        fact (f-1);
    }
}
void main ()
{
    int f;

    printf("Enter a no.: ");
    scanf("%d",&f);

    fact (f);

    printf("Factorial of %d! = %d",f,ans);
}
