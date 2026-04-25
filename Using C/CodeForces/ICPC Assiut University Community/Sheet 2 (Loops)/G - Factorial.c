#include<stdio.h>
int main()
{
	long long int n,m,i;
	scanf("%lld", &n);

	long long int fact = 1;

	while(n--){
		fact = 1;
		scanf("%lld", &m);

		if(m==0){
			printf("%lld\n", fact);
		}
		else{

			for(i=1; i<=m; i++)
			{
			fact = fact * i;
			}

			printf("%lld\n",fact);
		}
	}

	return 0;
}
