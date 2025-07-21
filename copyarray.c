#include <stdio.h>

int main(){
	int n,arr1[50],arr2[50],temp,sum=0;
	
	printf("Enter the number of Elements:");
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		printf("Enter Element %d: ",i+1);
		scanf("%d",&arr1[i]);
		}
	
	printf("The Enterred Array:");
	
	for(int i = 0; i < n; i++){
		printf("%d ",arr1[i]);
		}
	
	printf("\nThe Copy of Array:");
	
	for(int i = 0; i < n; i++){
		arr2[i] = arr1[i];
		}
	for(int i = 0; i < n; i++){
		printf("%d ",arr2[i]);
		}
	printf("\n");
	return 0;}
