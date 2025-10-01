#include <stdio.h>

void numprint(int n);

void numprint(int n)
{
    printf("%d\n",n);
    numprint(n+1);


}
 void main(){
 int n;
  numprint(n);

 }

