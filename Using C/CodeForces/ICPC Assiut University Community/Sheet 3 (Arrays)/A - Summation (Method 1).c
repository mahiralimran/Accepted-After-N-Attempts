#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,sum=0;
	scanf("%lld",&n);
	long long int arr[n+1];

	for(i=0; i<n; i++){
		scanf("%lld",&arr[i]);
		sum += arr[i];
		}

    if(sum<0){
        sum = -sum;
        printf("%lld\n",sum);
    }
    else{
        printf("%lld\n",sum);
    }

	return 0;
}
