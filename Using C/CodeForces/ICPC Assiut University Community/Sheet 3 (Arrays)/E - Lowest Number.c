#include<stdio.h>
int main()
{
	long long int n,i,ind=0;
	scanf("%lld",&n);

	long long int arr[n+1];

	for(i=0; i<n; i++){
		scanf("%lld",&arr[i]);
	}

	long long int low = arr[0];
	for(i=0; i<n; i++){
		if(low>arr[i]){
			low = arr[i];
			ind = i;
		}
	}

	printf("%lld %lld",low,ind+1);

	return 0;
	}
