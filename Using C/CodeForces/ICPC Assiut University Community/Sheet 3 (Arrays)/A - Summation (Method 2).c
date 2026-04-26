#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,m,i,sum=0;
	scanf("%lld",&n);

	while(n--){
		scanf("%lld",&m);
		sum += m;
	}

	printf("%lld\n",llabs(sum));

	return 0;
}

