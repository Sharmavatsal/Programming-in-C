


#include <stdio.h>
int ans=1;

  void fact (int f);

 void fact(int f){
    int n=1;

    if(n<=f){

        ans=ans*f;
        fact (f-1);
    }
 }

 void main(){

 int f;

 printf("enter num=");
 scanf("%d",&f);

 fact(f);

 printf("factorial series is %d",ans);
 }

