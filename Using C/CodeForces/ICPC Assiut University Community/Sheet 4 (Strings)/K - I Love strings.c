#include<stdio.h>
#include<string.h>
int main()
{
	int n,len1=0,len2=0,maxlen=0;
	scanf("%d",&n);
	
	char str1[51],str2[51];
	while(n--){
		scanf("%s %s", str1,str2);
		
		len1 = strlen(str1);
		len2 = strlen(str2);
		
		if(len1 > len2){
			maxlen = len1;
		}
		else if(len1<len2){
			maxlen = len2;
		}
		else{
			maxlen = len1;
		}
		
		for(int i=0; i<maxlen; i++){
			if (i < len1) {
                printf("%c", str1[i]);
            }

            if (i < len2) {
                printf("%c", str2[i]);
            }
		}
		
		printf("\n");
	}
	
	return 0;
}