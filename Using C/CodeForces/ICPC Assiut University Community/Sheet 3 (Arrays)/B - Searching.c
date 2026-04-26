#include<stdio.h>
int main()
{
	long long int n,i,x,here;
	scanf("%lld",&n);
	long long int arr[n+1];

	for(i=0; i<n; i++){
		scanf("%lld",&arr[i]);
	}

	scanf("%lld",&x);

	for(i=0; i<n; i++){
		if(arr[i]==x){
			here = i;
			break;
		}
		else{
			here = -1;
		}
	}

	printf("%lld\n",here);

	return 0;
}
