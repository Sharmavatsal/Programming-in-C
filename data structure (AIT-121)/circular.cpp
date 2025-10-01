#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *first=NULL;
void create (struct node *p)

{
	int val;
	
	printf ("Enter a value : ");
	scanf ("%d",&val);
	
	if (p==NULL){
		
		p = (struct node *)malloc(sizeof(struct node));
		p -> data = val;
		p -> next = p;
		first = p;
	}
}

void insertatlast(struct node *p)
{
	struct node *tmp;
	int val;
	
	if (p==NULL){
		
		printf("List Empty");
	}
	
	else {
		
		printf("Enter a value : ");
		scanf("%d",&val);
		
		do
		{
			p = p -> next;
		}
		
		while (p->next != first);
		
		tmp = (struct node *)malloc(sizeof (struct node));
		tmp -> data = val;
		p -> next = tmp;
		tmp -> next = first;
		
	}
}

void display (struct node *p){
	
	if (p==NULL){
		
		printf("List Empty");
	}
	
	else {
		
		do
		{
			printf("Address = %p value of node = %d next Address = %p\n",p,p->data,p->next);
			p=p->next;
		}
		while (p != first);
	}
	
}


void del_first(struct node *p){
	struct node *tmp;
	if (p==NULL){
		
		printf("List Empty");
	}
	
	else{
		
		do
		{
			p=p->next;
		}while (p->next != first);
		
		tmp = p;
		p=p->next;
		tmp->next = p->next;
		
		free (p);
		
		first = tmp->next;
	}
}

void del_at(struct node *p){
	
	struct node *tmp;
	
	int loc=1,n;
	if (p==NULL){
		
		printf("List Empty");
	}
	
	else{
		
		printf("Enter a Location : ");
		scanf ("%d",&n);
		do
		{
			tmp=p;
			p=p->next;
			loc++;
		}
		while (p != first && loc < n);
		
		tmp -> next = p->next;
		
		free (p);
		
		
	}
}

void update(struct node *p){
	
	struct node *tmp;
	
	int loc=1,n,val;
	if (p==NULL){
		
		printf("List Empty");
	}
	
	else{
		
		printf("Enter a Location : ");
		scanf ("%d",&n);
		printf("Enter a new value : ");
		scanf ("%d",&val);
		do
		{
			
			p=p->next;
			loc++;
		}
		while (p != first && loc < n);
		
		p -> data = val;
		
		
	}
}

int main(){
	
	int choice = -1;
	
	while  (choice != 0){
		
		printf("press 1 to create LL\n");
		printf("press 2 to insert a node at last\n");
		printf("press 3 to display a LL\n");
		printf("press 4 to delete first node in LL\n");
		printf("press 5 to delete any node in LL\n");
		printf("press 6 to update at any node in LL\n");
		printf("press 0 to exit\n");
		scanf("%d",&choice);
		
		switch (choice){
			
			case 1:
				{
					create (first);
					break;
				}
			case 2:
				{
					insertatlast(first);
					break;
				}
			case 3:
				{
					display(first);
					break;
				}
			case 4:
				{
					del_first(first);
					break;
				}
			case 5:
				{
					del_at(first);
					break;
				}
			case 6:
				{
					update(first);
					break;
				}
			case 0:
				{
					printf("thank you");
					break;
				}
		}
	}
}
