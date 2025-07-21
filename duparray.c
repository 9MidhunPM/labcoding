#include <stdio.h>

int main(){
	int n,arr[50],temp,sum = 0;
	
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
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}
			}
		}	
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            sum++; 
        }
    }
    printf("\nNumber of duplicates = %d",sum);

	printf("\n");
	return 0;}
