#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	scanf("%s", &str);
	char str2[1001];
	scanf("%s", &str2);
	
	int cnt=0,cnt2=0;
	
	for(int i=0; str[i]!='\0'; i++){
		cnt++;
	}
	for(int i=0; str2[i]!='\0'; i++){
		cnt2++;
	}
	
	printf("%d %d\n",cnt,cnt2);
	
	char strplus[3000];
	
	for(int i=0; i<cnt; i++){
		strplus[i] = str[i];
	}
	
	strplus[cnt] = ' ';
	
	for(int i=0; i<cnt2; i++){
		strplus[cnt+i+1] = str2[i];
	}
	
	strplus[cnt+cnt2+1] = '\0';
	
	printf("%s\n",strplus);
	
	return 0;
}