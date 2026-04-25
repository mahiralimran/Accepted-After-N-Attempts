#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);

	int m = n;

	if(m==122){
		printf("a\n");
	}
	else{
		printf("%c", n+1);
	}
	return 0;
}
