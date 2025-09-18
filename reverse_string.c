#include <stdio.h>
#include <string.h>

void main(void)
{
    char str[50],str2[50];
    int i=0,j,z,k,a;
    printf("Enter string : ");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    strcpy(str2,str);
    for(j=0;j<i;j++)
    {
        z=str[i-1];
        str[i-1]=str[j];
        str[j]=z;
        i--;
    }
    printf("%s",str);
}
