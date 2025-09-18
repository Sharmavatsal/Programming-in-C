#include <stdio.h>

void main(void)
{
    int n1,n2,n3;

    printf("Enter a digit n1: ");
    scanf("%d",&n1);

    printf("Enter a digit n2: ");
    scanf("%d",&n2);

    printf("Enter a digit n3: ");
    scanf("%d",&n3);



    if (n1*n1 + n2*n2==n3*n3){
            printf("this are pythogorean tripplets");
    }
    else if (n1*n1 + n3*n3==n2*n2){
        printf("this are pythogorean trippets");
    }
    else if (n3*n3 + n2*n2==n1*n1) {
		printf("this are pythagorean tripplets")
	}
elsse{
        printf("this are not pythogrean tripplets");
    }



}

