#include <stdio.h>


int f(int n);
 count;

f(int n){

if(n>=1){

printf("%d\n",n);

 return f(f(n-1));

}
}
main(){


int n;

printf("enter num:");
scanf("%d",&n);

f(n);


}
