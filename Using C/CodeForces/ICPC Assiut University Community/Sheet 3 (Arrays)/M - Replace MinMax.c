#include<stdio.h>
int main()
{
	long long int n,i,minin=0,maxin=0,temp;
	scanf("%lld",&n);

	long long int arr[n+1];

	for(i=0; i<n; i++){
		scanf("%lld",&arr[i]);
	}

	long long int min = arr[0];
	long long int max = arr[0];

	for(i=0; i<n; i++){
		if(min>arr[i]){
			min = arr[i];
			minin = i;
		}
		if(max<arr[i]){
			max = arr[i];
			maxin = i;
		}
	}

	temp = arr[minin];
	arr[minin] = arr[maxin];
	arr[maxin] = temp;

	for(i=0; i<n; i++){
		printf("%lld ",arr[i]);
	}


	return 0;
	}
