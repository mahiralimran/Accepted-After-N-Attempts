#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);

	int m = n;

	if(m >= 48 && m<= 57){
		printf("IS DIGIT\n");
	}
	else if(m >= 65 && m<= 90){
		printf("ALPHA\nIS CAPITAL\n");
	}
	else{
		printf("ALPHA\nIS SMALL\n");
	}

	return 0;
}
