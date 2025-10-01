// to access structures members

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20];
    float gpa;
};

int main (int argc, char argv[]){

    struct student s1 = {1,"meet",6.4};
    struct student s2 = {2,"tirth",5.5};
    struct student s3 = {3,"dhvanit",4.3};

    printf("%d %s %.2f%\n",s1.rollno, s1.name, s1.gpa);
    printf("%d %s %.2f%\n",s2.rollno, s2.name, s2.gpa);
    printf("%d %s %.2f%\n",s3.rollno, s3.name, s3.gpa);

    return 0;
}
