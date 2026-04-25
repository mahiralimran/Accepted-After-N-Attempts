#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d", &n);

	int max = 0;

	while(n--){
		scanf("%d", &m);
		if(m>max){
			max = m;
		}
	}

	printf("%d\n", max);

	return 0;
}
