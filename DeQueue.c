#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void InsertR(int value){
	if(front == (rear+1) % SIZE)
		printf("Overflow!\n");
	else if (rear == -1 && front == -1){
		rear = 0, front = 0;
		queue[rear] = value;
		printf("Inserted %d into queue at Rear\n", value);
	}
	else {
		rear = (rear+1) % SIZE;
		queue[rear] = value;
		printf("Inserted %d into queue at Rear", value);
	}
}

void InsertF(int value){
	if(front == (rear+1) % SIZE)
		printf("Overflow!\n");
	else if (rear == -1 && front == -1){
		rear = 0, front = 0;
		queue[rear] = value;
		printf("Inserted %d into queue at front\n", value);
	}
	else if (front == 0){
		front = SIZE - 1;
		queue[front] = value;
		printf("Inserted %d into queue at front\n", value);
	
	}
	else{	
		front = front - 1;
		queue[front] = value;
		printf("Inserted %d into queue at front\n", value);
	}
}

void DeleteF(){
	if(front == -1 && rear == -1)
		printf("Underflow\n");
	
	else if(front == rear){
		printf("Deleted : %d \n from Front", queue[front]);
		front = -1, rear = -1;
	}
	
	else{
		printf("Deleted : %d \n from Front", queue[front]);
		front = (front+1) % SIZE;
	}
}

void DeleteR(){
	if(front == -1 && rear == -1)
		printf("Underflow\n");
	
	else if(front == rear){
		printf("Deleted : %d \n from Rear\n", queue[front]);
		front = -1, rear = -1;
	}
	
	else if (rear == 0){
		printf("Deleted : %d \n from Rear\n", queue[front]);
		rear = SIZE -1;
	}
	else{
		printf("Deleted : %d \n from Rear\n", queue[front]);
		rear = rear -1;
	}
}

void Display(){
	if(front == -1 && rear == -1)
		printf("Underflow\n");
	else{
		int i = front;
		printf("Queue Elements: \n");
		while(1){
			printf("%d ", queue[i]);
			if( i == rear) break;
			i = (i + 1) % SIZE;
			
		}
		printf("\n");
	}
}

int main(){
	int choice, value;
	printf("Queue Operations:\n");
	printf(" 1.InsertF\n 2.InsertR\n 3.DeleteF\n 4.DeleteR\n 5.Display\n 6.Exit\n");
	while(choice != 6){
		printf("Enter Choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the element to Insert:");
				scanf("%d",&value);
				InsertF(value);	
				break;
				
			case 2:
				printf("Enter the element to Insert:");
				scanf("%d",&value);
				InsertR(value);	
				break;
				
			case 3:
				DeleteF();
				break;
			
			case 4:
				DeleteR();
				break;			
					
			case 5:
				Display();
				break;
					
			case 6:
				printf("Exited Successfully");
				break;
				
			default:
				printf("Enter a right code");
				break;
			
		}
		
	
	}	
	

return 0;
}


















