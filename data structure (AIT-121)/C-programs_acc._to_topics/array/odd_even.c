#include <stdio.h>

void oe (int);

int main (void){

    int arr[] = {21,24,32,42,506.888};

    for( int i=0;i<sizeof(arr)/sizeof(int);i++){

        oe(arr[i]);
    }
    return 0;
}

void oe (int n)
{
    if (n%2==0)

        printf ("%d is even\n",n);

    else

        printf ("%d is odd\n",n);
}
