#include <stdio.h>

void numprint(int n);

void numprint(int n)
{
   if(n<=10){

        printf("%d\n",n);
    numprint(n+1);

   }
}
 void main(){
 int n=1;
  numprint(n);

 }
