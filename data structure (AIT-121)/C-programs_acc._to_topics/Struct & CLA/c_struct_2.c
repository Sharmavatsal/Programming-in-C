// To create Array of structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students
{
    int rollno;
    char name[20];
    int gpa;
};

int main (int argc, int *argv[]){
    struct students  s[5];


    printf("%d bytes \n", sizeof(s));

  //  printf("Enter the number of students : ");
    //scanf("%d",&s);

    for(int i=0;i<5;i++){
        printf("Enter Roll no.: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name : ");
        scanf("%s", &s[i].name);

        printf("Enter gpa : ");
        scanf("%f", &s[i].gpa);

    }
}
