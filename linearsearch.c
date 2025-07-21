#include <stdio.h>

int main(){
	int key,arr[50],n,keyfound=0;
	
	printf("Enter the number of Elements:");
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		printf("Enter Element %d: ",i+1);
		scanf("%d",&arr[i]);
		}
	
	printf("The Enterred Array:");
	
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
		}
	printf("\n");
	
	printf("Enter the KEY:");
	scanf("%d",&key);

	printf("Searching....\n");	
	
	for(int i = 0; i < n; i++){
		if(arr[i]==key){
			printf("Key Found at index %d\n",i);
			keyfound=1;
			}
		}
	if(keyfound == 0){
		printf("Key was not found\n");
		}
		
	return 0;}
