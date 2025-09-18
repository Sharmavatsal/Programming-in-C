#include <stdio.h>

void main(void){

int x;
int y;
int ans;

printf("Enter x: ");
scanf("%d",&x);

printf("Enter y: ");
scanf("%d",&y);

ans=x*y;
printf("Multiplication=%d \n",ans);

ans=x%y;
printf("percent=%d \n",ans);

ans=x-y;
printf("Subtraction=%d \n",ans);

ans=x/y;
printf("Division=%d \n",ans);

ans=x+y;
printf("Addition=%d \n",ans);

}


