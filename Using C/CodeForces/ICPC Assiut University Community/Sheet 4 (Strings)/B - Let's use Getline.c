#include<stdio.h>
#include<string.h>
int main()
{
	long long int i;
	char ch[1000000];
	fgets(ch,sizeof(ch),stdin);

	for(i=0; ch[i]!='\0'; i++){
		if(ch[i]=='\\'){
			break;
		}
		else{
			printf("%c",ch[i]);
		}
	}

	return 0;
}
