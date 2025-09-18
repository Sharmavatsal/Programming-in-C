#include <stdio.h>

void main(void)
{
    int matrix [3][3];
    int i,j;
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



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
    printf("Enter element %d= ",i+1);
    scanf("%d",&matrix[i][j]);
    }

}
printf("Column major form of matrix is as follows:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
    {

        printf("%d\t",matrix[i][j]);
}
    printf("\n");
    }




    }

