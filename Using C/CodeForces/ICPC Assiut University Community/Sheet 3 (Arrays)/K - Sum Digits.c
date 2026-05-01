#include<stdio.h>
int main()
{
	long long int i,n,sum=0;
	scanf("%lld",&n);
	
	char str[n+1];
	
	for(i=0; i<n; i++){
		scanf("%s", str);
	}
	
	for(i=0; i<n; i++){
		sum += str[i] - '0';
	}
	
	printf("%lld\n",sum);
	
	return 0;
}