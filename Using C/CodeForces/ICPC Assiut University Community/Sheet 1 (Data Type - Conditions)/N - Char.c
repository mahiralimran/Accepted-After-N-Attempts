#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);

	int m = n;
	if(m>=65 && m<=90){
		printf("%c", m+32);
	}
	else{
		printf("%c", m-32);
	}

	return 0;
}
