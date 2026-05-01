#include<stdio.h>
#include<string.h>
int main()
{
	int n,len=0;
	scanf("%d",&n);
	
	char str[101];
	
	while(n--){
		scanf("%s", str);
		
		len = strlen(str);
		if(len<=10){
			printf("%s\n", str);
		}
		else{
			printf("%c%d%c\n",str[0],len-2,str[len-1]);
		}
	}
	
	return 0;
}