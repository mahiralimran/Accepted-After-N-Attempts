#include<stdio.h>
int main()
{
	long long int n,x,y;
	scanf("%lld",&n);
	
	while(n--){
		scanf("%lld %lld",&x,&y);
		
		if(x==y){
			printf("Square\n");
		}
		else{
			printf("Rectangle\n");
		}
	}
	
	return 0;
}
