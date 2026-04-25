#include<stdio.h>
int main()
{
	int n,a,b,temp;
	scanf("%d", &n);

	int sum = 0;

	while(n--){
		sum = 0;
		temp = 0;
		scanf("%d %d",&a,&b);

		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}

		if(a==b || (b-a) == 1){
			printf("0\n");
		}
		else{
			for(int i=a+1; i<b; i++){
			if(i%2!=0){
				sum += i;
			}
		}

		printf("%d\n", sum);
		}

	}

	return 0;
}
