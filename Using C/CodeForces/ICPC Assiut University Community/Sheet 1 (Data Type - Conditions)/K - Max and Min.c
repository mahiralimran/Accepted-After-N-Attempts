#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);

	if(a>b && a>c){
		if(b>c){
			printf("%d %d", c,a);
		}
		else{
			printf("%d %d", b,a);
		}
	}
	else if(b>a && b>c){
		if(a>c){
			printf("%d %d", c,b);
		}
		else{
			printf("%d %d", a,b);
		}
	}
	else if(c>a && c>b){
		if(a>b){
			printf("%d %d", b,c);
		}
		else{
			printf("%d %d", a,c);
		}
	}
	else if(a==b && b==c){
        printf("%d %d",a,b);
	}
	else if(a==b){
		if(a>c){
			printf("%d %d", c,a);
		}
		else{
			printf("%d %d", a, c);
		}
	}
	else if(b==c){
		if(b>a){
			printf("%d %d", a,b);
		}
		else{
			printf("%d %d", b, a);
		}
	}
	else if(a==c){
		if(a>b){
			printf("%d %d", b,a);
		}
		else{
			printf("%d %d", a, b);
		}
	}

	return 0;
}
