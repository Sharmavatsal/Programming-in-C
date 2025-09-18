#include <stdio.h>

void main(void)
{
    int matrixa [3][3];
    int matrixb [3][3];
    int result [3][3];

    int i,j,k,sum=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
    printf("Enter element %d= ",i+1);
    scanf("%d",&matrixa [i][j]);
    }

}
printf("Matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {

        printf("%d\t",matrixa [i][j]);
}
    printf("\n");
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
    printf("Enter element %d= ",i+1);
    scanf("%d",&matrixb [i][j]);
    }

}
printf("Matrix 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {

        printf("%d\t",matrixb [i][j]);
}
    printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){


                sum = sum+matrixa [i][k] * matrixb [k][j];

            }
            result [i][j]=sum;
            sum=0;
        }
    }

    printf("Multiplication of the two following matrix : \n");
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){

        printf("%d\t",result [i][j]);
    }
    printf("\n");

}
}


