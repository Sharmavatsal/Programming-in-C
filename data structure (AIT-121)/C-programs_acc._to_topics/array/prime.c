#include <stdio.h>



int pnumber (int n)
{
    int i,v=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    if (n==0 || n==1)
        v=1;

    for (i=2;i<n/2;i++){
        if(n%i==0){
            v=1;
            break;
        }
    }
    if (v==0)

        printf("%d is a prime number",n);


    else

        printf("%d is a composite number",n);


}

void main(void)
{
    int n;

  pnumber (n);
}
