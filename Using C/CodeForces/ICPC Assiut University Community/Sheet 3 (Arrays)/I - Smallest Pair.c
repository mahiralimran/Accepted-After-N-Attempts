#include<stdio.h>
int main()
{
	long long int i,j,t,n,low=0,value=0;
	scanf("%lld",&t);

	while(t--){
		scanf("%lld",&n);

		long long int arr[n+1];

		for(i=0; i<n; i++){
			scanf("%lld",&arr[i]);
		}

		low = arr[0] + arr[1] + 1;

		for(i=0; i<n; i++){
			for(j=i+1; j<n; j++){
				value = arr[i] + arr[j] + (j+1) - (i+1);

				if(value<low){
					low = value;
				}
			}
		}

		printf("%lld\n",low);
	}

	return 0;
}
