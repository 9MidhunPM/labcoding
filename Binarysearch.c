#include <stdio.h>

int main(){ 
        int l,r,mid,key,keyfound=0;
	int n,arr[50],temp;
	
	printf("Enter the number of Elements:");
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		printf("Enter Element %d: ",i+1);
		scanf("%d",&arr[i]);
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
	
	printf("\n Enter Key to search:");
	scanf("%d",&key);
	
        printf("\n Sorting the Array...\n");
	
	printf("\n The Entered Array:");
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
		}
	printf("\n");
	
	l=0;
	r=n-1;
	
	while( l<=r && keyfound==0){
	        mid = (l+r)/2;
	        if(arr[mid]<key)
	              l=mid+1;
	        if(arr[mid]>key)
	              r=mid-1;
	        if(arr[mid]==key)
	              keyfound=1;
	        }
	
	if(keyfound==0)
	        printf("Entered key was not found in the array.");
	if(keyfound!=0)
	        printf("Entered key was found in the array at index %d\n",mid);
	
	
	return 0;}
