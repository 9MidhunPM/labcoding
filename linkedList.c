#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *head = NULL;
struct node *ptr = NULL;

void insertRear(){
	if(head == NULL){
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter data for first NODE : ");
		scanf("%d",&head->data);
		ptr = head;
	}
	else{
		struct node *current = (struct node *)malloc(sizeof(struct node));
		printf("Enter data for New NODE : ");
		scanf("%d", &current->data);
		ptr->link = current;
		ptr = ptr->link;
		ptr->link = NULL;
	}		
}

void insertFront(){
	if(head == NULL){
		head = (struct node *)malloc(sizeof(struct node));
		printf("Enter data for first NODE : ");
		scanf("%d",&head->data);
		ptr = head;
	}
	else{
		struct node *currentnew = (struct node *)malloc(sizeof(struct node));
		printf("Enter data for New NODE : ");
		scanf("%d", &currentnew->data);
		currentnew->link = head;
		head = currentnew;
	}
}

void display(){
	struct node *disp = head;
	printf("OUTPUT:");
	while(disp != NULL){
		printf("%d ", disp->data);
		disp = disp->link;	
	}
}

int main(){
	int choice = 0;
	printf("\\\\Main Menu//\n 1.Insert at Rear\n 2.Insert at Front \n 3.Display \n 4.Exit");
	while(1){
		printf("\nEnter Choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				insertRear();
				break;
			case 2:
				insertFront();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				printf("Enter a right option");
				break;
		}	
	}
}
