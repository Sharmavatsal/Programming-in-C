// program : sum
// to access command line arguments with convension
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[])
{
    printf("Total %d arguments are provided/n", argc);

    int a,b,ans;
    a = atoi (argv[1]);
    b = atoi (argv[2]);

    ans = a + b;

    printf("%d = %d + %d/n", ans,a,b);

    return 0;
}


