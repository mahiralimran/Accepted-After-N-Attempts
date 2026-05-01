#include<stdio.h>
int main()
{
	char stra[21],strb[21];
	scanf("%s", stra);
	scanf("%s", strb);
	
	int i=0;
	
	while(1){
		if(stra[i]=='\0' && strb[i]=='\0'){
			printf("%s\n",stra);
			break;
		}
		else if(stra[i]=='\0' || stra[i]<strb[i]){
			printf("%s\n",stra);
			break;
		}
		else if(strb[i]=='\0' || strb[i]<stra[i]){
			printf("%s\n",strb);
			break;
		}
		else if(stra[i]==strb[i]){
			i++;
		}
	}
	
	return 0;
}