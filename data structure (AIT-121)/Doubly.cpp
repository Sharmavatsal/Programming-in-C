#include <stdio.h>
#include <stdlib.h>

struct node 
{
	struct node *prev;
	int data;
	struct node *next;
	
};

struct node *first = NULL;
struct node *last = NULL;

void create (struct node *p)
{
	int val;
	
	if (first != NULL){
		
		printf("linked list is already created\n");
	}
	
	else{
		
		printf("Enter a value = ");
		scanf("%d",&val);
		
		first = (struct node *)malloc(sizeof(struct node));
		first -> prev = NULL;
		first -> data = val;
		first -> next = NULL;
		last = first;
		
	}
}

void insertatlast (struct node *p){
	struct node *tmp;
	int val;
	
	if (p==NULL){
		
		printf("List is Empty");
	}
	else{
		
		printf("Enter a value = ");
		scanf("%d",&val);
	
	while (p->next != NULL)
	{
		p=p->next;
	}
	
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp -> data = val;
	p -> next = tmp;
	tmp -> prev = p;
	tmp -> next = NULL;
	last = tmp;
}
}

void display (struct node *p)
{
		if (p==NULL){
		
		printf("List is Empty");
	}
	else{
		
		while (p !=  NULL)
		{
			
			printf("Address of prev node = %p Address = %p value = %d next node Address = %p\n",p->prev,p,p->data,p->next);
			p=p->next;
		}
	
}
}

void insertat (struct node *p){
	
	struct node *tmp,*tmp2;
	int val;
	int loc=1;
	int n;
	
	if (p == NULL){
		
		printf("List is Empty");
	}
	
	else {
		
		printf("Enter a Location : ");
		scanf ("%d",&n);
		
		printf("Enter a value : ");
		scanf("%d",&val);
		
		while (p != NULL && loc < n-1){
			
			p=p->next;
			loc ++;
		}
		
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp2 = (struct node *)malloc(sizeof(struct node));
		tmp2 = p -> next;
		tmp -> data = val;
		tmp -> next = tmp2;
		tmp -> prev = p;
		p -> next = tmp;
		tmp2 -> prev = tmp;
		
		
		
	}
}

void update (struct node *p){
	
	int val;
	int loc=1;
	int n;
	
	if (p == NULL){
		
		printf("List is Empty");
	}
	
	else {
		
		printf("Enter a Location : ");
		scanf ("%d",&n);
		
		printf("Enter a new value : ");
		scanf("%d",&val);
		
		while (p != NULL && loc < n){
			
			p=p->next;
			loc ++;
		}
	p->data = val;
	
}
}

void backward(struct node *p){
	
		if (p == NULL){
		
		printf("List is Empty");
	}
	else
	{
		while(p!= NULL)
		{
			printf("Address of prev node = %p Address = %p value = %d next node Address = %p\n",p->prev,p,p->data,p->next);
			p=p->prev;
			
		}
	}
}

void del_at (struct node *p){
	
	struct node *tmp,*tmp2;
	int loc=1,n;
	
		if (p == NULL){
		
		printf("List is Empty");
	}
	
	else {
		
		printf("Enter a Location : ");
		scanf ("%d",&n);
		
		while (p != NULL && loc < n){
			
			p=p->next;
			loc ++;
		}
			tmp = p->prev;
			tmp2 = p->next;
			
			tmp -> next = tmp2;
			tmp2 -> prev = tmp;
			
			free(p);
	
}
}

void del_first(struct node *p){
	
		if (p == NULL){
		
		printf("List is Empty");
	}
	else{
	first = p->next;
	first->prev=NULL;
	
	free(p);
}
}

int main(){
	int choice=-1;
	while (choice != 0){
	printf ("press 1 to create LL\n");
	printf ("press 2 to insert LL\n");
	printf ("press 3 to display LL\n");
    printf ("press 4 to insert at any LL\n");
	printf ("press 5 to update LL\n");
	printf ("press 6 to travel backward in LL\n");
	printf ("press 7 to delete at any location in LL\n");
    printf ("press 8 to delete first node in LL\n");	
	scanf("%d",&choice);
	
	switch (choice){
		
		case 1:
			{
				create(first);
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
				insertat(first);
				break;
			}
		case 5:
			{
				update(first);
				break;
			}
		case 6:
			{
				backward(last);
				break;
			}
		case 7:
			{
				del_at(first);
				break;
			}
		case 8:
			{
				del_first(first);
				break;
			}
		case 0:
			{
				printf("challa ja BSDK");
				break;
			}
			
	
	}
}

}


