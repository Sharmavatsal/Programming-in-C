# include <stdio.h>

int swap (int a,int b){

    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    printf ("In swap, %d, %d\n",a,b);
}
    int main (void){

        int x, y;

        printf ("Enter x : ");
        scanf("%d",&x);

        printf ("Enter y : ");
        scanf("%d",&y);

        printf ("In main before swap,%d ,%d\n",x,y);

        swap (x,y);

        printf ("In main after swap,%d ,%d",x,y);
    }

