#include <stdio.h>

void main(void)
{
    int matrix[3][3];
    int i,j,sum,k;

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
    printf("Enter element %d= ",i+1);
    scanf("%d",&matrix[i][j]);
    }

}
printf("Row major form of matrix is as follows:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {

        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
    sum=0;
    for(j=0;j<3;j++){
        sum = sum+matrix[i][j];
    }

    printf("Sum of row %d: %d\n",i+1,sum);
    }

     printf("\n");
    for(i=0;i<3;i++){
    sum=0;
    for(j=0;j<3;j++){
        sum = sum+matrix[j][i];
    }

    printf("Sum of column %d: %d\n",i+1,sum);
    }

}
