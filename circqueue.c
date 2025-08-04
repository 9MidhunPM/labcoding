#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void Enqueue(int value){
	if(front == (rear+1) % SIZE)
		printf("Overflow!\n");
	else if (rear == -1 && front == -1){
		rear = 0, front = 0;
		queue[rear] = value;
		printf("Enqueued %d into queue\n", value);
	}
	else {
		rear = (rear+1) % SIZE;
		queue[rear] = value;
		printf("Enqueued %d into queue\n", value);
	}
}

void Dequeue(){
	if(front == -1 && rear == -1)
		printf("Underflow\n");
	
	else if(front == rear){
		printf("Deleted : %d \n", queue[front]);
		front = -1, rear = -1;
	}
	
	else{
		printf("Deleted : %d \n", queue[front]);
		front = (front+1) % SIZE;
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
	printf(" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
	while(choice != 4){
		printf("Enter Choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the element to Enqueue:");
				scanf("%d",&value);
				Enqueue(value);	
				break;
				
			case 2:
				Dequeue();
				break;
			
			case 3:
				Display();
				break;
				
			case 4:
				printf("Exited Successfully");
				break;
				
			default:
				printf("Enter a right code");
				break;
			
		}
		
	
	}	
	

return 0;
}


















