#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d", &n);

	int rem=0, prrem=0;
	while(n--){
		scanf("%d", &m);
		int rem=0, prrem=0;
		while(1){
			rem = m%10;

			printf("%d ", rem);

			if(m<10){
				break;
			}

			m = m/10;
		}

		printf("\n");
	}

	return 0;
}
