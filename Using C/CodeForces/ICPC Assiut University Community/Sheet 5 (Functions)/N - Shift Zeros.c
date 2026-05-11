#include<stdio.h>

void zero_shift(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]==0){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	zero_shift(arr,n);
	
	return 0;
}