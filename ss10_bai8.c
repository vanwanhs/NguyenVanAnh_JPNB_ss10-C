#include <stdio.h>

int main(){
	int n,m; 
	printf("moi ban nhap vao so cot ");
	scanf("%d",&n); 
	printf("moi ban nhap vao so hang ");
	scanf("%d",&m); 
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("moi ban nhap gai tri vao [%d][%d]",i,j);
			scanf("%d",&arr[i][j]); 
		} 
	}

		for(int j=0;j<m;j++){
			for(int i=0;i<n-1;i++){
				for(int k=i+1;k<n;k++){
				if(arr[i][j]>arr[k][j]){
					int temp=arr[i][j];
					arr[i][j]=arr[k][j];
					arr[k][j]=temp;
				} 
			} 
		}
		
	} 
	printf("mang sau khi sap xep \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]); 
			
		} 
		printf("\n"); 
	} 
	return 0; 
	
	 
} 
