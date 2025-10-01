#include <stdio.h>
#include <stdlib.h>

struct  node{
	int rollno;
	char name[20];
	struct node *next;
};

struct node *first = NULL;

void create (struct node *p){
	
	int roll;
	char name[20];
	
	if (p != NULL){
		
		printf("List already created!\n");
	}
	else{
		
		printf ("Enter your roll number : ");
		scanf ("%d",&roll);
		
		printf ("Enter your name : ");
		scanf ("%s",&name);
		
		p = (struct node *)malloc (sizeof (struct node));
		p -> rollno = roll;
		
		for(int i=0;i<20;i++)
		{
			p->name[i]=name[i];
			
		}
		
		p -> next = NULL;
		first = p;
		
	}
	
}

void insertlast(struct node *p){
	struct node *tmp;
		int roll;
	char name[20];
	
	if (p == NULL){
		
		printf("List empty !\n");
	}
	else{
		
		while (p -> next != NULL){
			
			p = p -> next;
		}
		
		printf ("Enter your roll number : ");
		scanf ("%d",&roll);
		
		printf ("Enter your name : ");
		scanf ("%s",&name);
		
		tmp = (struct node *)malloc(sizeof(struct node));
		tmp -> rollno = roll;
		
			for(int i=0;i<20;i++)
		{
			tmp->name[i]=name[i];
			
		}
		
		tmp -> next = NULL;
		p -> next = tmp;
}
}

void display(struct node *p)
{
	
	while (p != NULL){
		
		printf("Roll number : %d Name : %s\n\n",p->rollno,p->name);
		p = p -> next;
	}
}

void search(struct node *p)
{
	
	int loc=1;
	int n;
	
	if (p == NULL){
		
		printf("List is Empty");
	}
	
	else {
		
		printf("Enter a Rollno : ");
		scanf ("%d",&n);
		
		while (p != NULL && loc < n){
			
			p=p->next;
			loc ++;
		}
			printf("Roll number : %d Name : %s\n\n",p->rollno,p->name);
	
}
	
}
int main (int argc, char *argv[]){
	
	int choice=-1;
	
	while(choice != 0)
	{
		printf("PRESS 1 TO CREATE \n");
			printf("PRESS 2 TO INSERT \n");
				printf("PRESS 3 TO DISPLAY \n");
					printf("PRESS 0 TO EXIT \n");
					printf("PRESS 4 TO SEARCH \n");
		printf("Enter your choice here :--> ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				{
					create(first);
					break;
					
				}
			case 2:
			{
				insertlast(first);
				break;
			}
			case 3:{
				display(first);
				break;
			}
			case 4:
				{
					search(first);
					break;
				}
			case 0:
				{
					printf("thnx");
					break;
					
				}
			
		}
	}
}
