#include<stdio.h>

long long int unique_value(long long int arr[], long long int n)
{
	long long int freq[2001];
	for(long long int i=0; i<2001; i++){
		freq[i] = 0;
	}
	
	long long int cnt=0;
	
	for(long long int i=0; i<n; i++){
		long long int val = arr[i];
		freq[val+1000]++;
	}
	
	for(long long int i=0; i<2001; i++){
		if(freq[i]>0){
			cnt++;
		}
	}
	
	return cnt;

}
int main()
{
	long long int n;
	scanf("%lld",&n);
	
	long long int arr[n];
	
	for(long long int i=0; i<n; i++){
		scanf("%lld",&arr[i]);
	}
	
	long long int dis = unique_value(arr,n);
	
	printf("%lld\n",dis);
	
	return 0;
}
