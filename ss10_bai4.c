#include <stdio.h>

int main(){
	int arr[]={5,7,867,9,23,5,3,1,4};
	int n=sizeof(arr) / sizeof(int);
	
	for(int i=0;i<n-1;i++){
		int min_indx=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_indx]){
				min_indx=j; 
			} 
		} 
		int temp=arr[min_indx];
		arr[min_indx]=arr[i];
		arr[i]=temp; 
	} 
	printf("day sau khi duoc sap xep ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	}
	return 0; 
} 
