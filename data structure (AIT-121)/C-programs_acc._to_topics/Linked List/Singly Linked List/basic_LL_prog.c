// To create LL with function
#include <stdio.h>
#include <stdlib.h>

struct Node *first = NULL;

struct Node {
    int data;
    struct Node *next;
};
void create (int val){

    struct  Node *tmp, *last;

    if (first == NULL){
        first = (struct Node*)malloc(sizeof(struct Node));
        first -> data = val;
        first -> next = NULL;
        last = first;
    }

    else{
         tmp = (struct Node*)malloc(sizeof(struct Node));
         tmp -> data = val;
         tmp -> next = NULL;
         last -> next = tmp;
         last = tmp;
    }

}
void display (struct Node *p){

    while (p != NULL){
        printf("Add of the node = %p value of the node = %d\n",p,p->data);
        //printf("%d",p->data);
        p = p->next;
    }
}

int main (void)
{
    create(1);
    create(2);
    create(3);

    display(first);

    return 0;
}
