#include <stdio.h>

int main (int argc,  char*argv[])
{
    printf("Total %d arguments are provided.\n", argc);

    for (int i=0;i<argc;i++){

        printf("%s\n", argv[i]);
    }

    return 0;
}
