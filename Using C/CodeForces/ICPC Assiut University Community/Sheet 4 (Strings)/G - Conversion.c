#include<stdio.h>
int main()
{
	char str[100001];
	scanf("%s",str);
	
	long long int i,cnv=0,ncnv=0;
	for(i=0; str[i]!='\0'; i++){
		cnv = str[i];
		
		if(str[i]==','){
			str[i] = ' ';
		}
		else if(cnv>=65 && cnv<=90){
			ncnv = cnv + 32;
			str[i] = ncnv;
		}
		else if(cnv>=97 && cnv<=122){
			ncnv = cnv - 32;
			str[i] = ncnv;
		}
	}
	
	printf("%s",str);
	
	return 0;
}