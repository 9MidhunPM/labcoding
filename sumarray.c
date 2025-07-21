#include <stdio.h>

int main(){
	int n,arr[50],temp,sum=0;
	
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
	
	printf("\nThe Sum of Array:");
	
	for(int i = 0; i < n; i++){
		sum+= arr[i];
		}
	printf("%d\n",sum);
	return 0;}
