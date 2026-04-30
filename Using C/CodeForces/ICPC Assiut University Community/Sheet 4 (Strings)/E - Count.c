#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,sum=0,digit=0;
	char str[1000000];
	scanf("%s", &str);

	for(i=0; str[i]!='\0'; i++){
		digit = str[i];
		sum += (digit-48);
	}

	printf("%lld",sum);

	return 0;
}
