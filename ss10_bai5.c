#include <stdio.h>

int main(){
	int arr[]={2,6,67,78,23,5,78,57,3};
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
	int value; 
	printf("\nmoi ban nhap gia tri can tim ");
	scanf("%d",&value);
	int start=arr[0],mid; 
	
	while(start<=n){
		mid=(start+n)/2;
		if(arr[mid]==value){
			printf("\nvi tri phan tu can tim o %d",mid); 
			return 0; 
		} else if(arr[mid]>value){
			n=mid-1;	
		} else{
			start =mid+1; 
		} 
			
	}
	printf("khong tim thay phan tu can tim");
	return 0; 
	
} 
