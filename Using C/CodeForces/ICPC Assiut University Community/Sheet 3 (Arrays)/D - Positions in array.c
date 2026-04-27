#include<stdio.h>
int main()
{
	long long int n,i;
	scanf("%lld",&n);

	long long int arr[n+1];

	for(i=0; i<n; i++){
		scanf("%lld",&arr[i]);

		if(arr[i]<=10){
			printf("A[%lld] = %lld\n",i,arr[i]);
		}
		else{
			continue;
		}
	}

	return 0;
}
