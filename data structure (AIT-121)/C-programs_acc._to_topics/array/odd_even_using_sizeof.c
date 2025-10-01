#include <stdio.h>

void oe (int);

int main (void)
{
    int arr[] = {21,23,56,45,69,777};

    for (int i=0;i<sizeof(arr)/sizeof(int);i++){
        oe(arr[i]);
    }

    return 0;
}

void oe (int n){

    if (n%2==0)

        printf ("%d is a prime number\n",n);

    else

        printf ("%d is a composite number\n",n);
}
