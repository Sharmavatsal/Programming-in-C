# include <stdio.h>

int swap (int *x,int *y){

    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

    printf ("In swap, %d, %d\n",*x,*y);
}
    int main (void){

        int x, y;

        printf ("Enter x : ");
        scanf("%d",&x);

        printf ("Enter y : ");
        scanf("%d",&y);

        printf ("In main before swap,%d ,%d\n",x,y);

        swap (&x,&y);

        printf ("In main after swap,%d ,%d",x,y);
    }
