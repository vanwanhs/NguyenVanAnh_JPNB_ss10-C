#include <stdio.h>

int main(){
	int arr[]={4,32,6,3,6,2,5,6,4,6,9};
	int n=sizeof(arr)/sizeof(int);
	int value[n];
	int m=sizeof(value)/sizeof(int);
	int number,cnt;
	printf("moi ban nhap vao so can tim kiem ");
	scanf("%d",&number);
	for(int i=0;i<n;i++){
		if(number==arr[i]){
			value[cnt]=i; 
			cnt++; 
		}
	}
	printf("so %d xuat hien o vi tri :",number); 
	for(int i=0;i<cnt;i++){
		if(value[i]>0){
			printf("%d ",value[i]); 
		} 
	}
	return 0; 	 
} 
