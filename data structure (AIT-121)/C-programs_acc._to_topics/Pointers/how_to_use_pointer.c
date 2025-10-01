#include <stdio.h>

int main (void)
{
    int x = 10;
    int *iptr;
    int *iptr2;

    iptr = &x;
    iptr2 = NULL;

    printf ("%p\n",&x);

    printf ("%p\n",iptr);

    printf ("%p\n",iptr2);

    printf ("%d\n",*iptr);

    printf ("%d\n",*(&x));
}
