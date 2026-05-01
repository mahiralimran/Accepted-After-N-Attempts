#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	scanf("%s", str);
	
	int count=0;
	int n = strlen(str);
	
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==str[n-1-i]){
			count++;
		}
	}
	
	if(count==n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	return 0;
}