#include <stdio.h>

int main (void)
{
    int v = 20;
    int *pA, **ppA;

    pA = &v;
    ppA = &pA;

    printf ("%p %p %p\n",&v,pA,*ppA);

    printf ("%d %d %d\n",v,*pA,**ppA);

    return 0;


}
