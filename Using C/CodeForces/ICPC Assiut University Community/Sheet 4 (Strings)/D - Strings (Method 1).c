#include<stdio.h>
int main(){
	int i,cnt1=0,cnt2=0;
	char str1[11],str2[11],strplus[22],strplus2[22];
	scanf("%s", str1);
	scanf("%s", str2);
	
	//Counting the Strings
	for(i=0; str1[i]!='\0'; i++){
		cnt1++;
	}
	for(i=0; str2[i]!='\0'; i++){
		cnt2++;
	}
	
	printf("%d %d\n",cnt1,cnt2);
	
	//Concating 2 Strings
	for(i=0; str1[i]!=0; i++){
		strplus[i] = str1[i];
	}
	for(i=0; str2[i]!=0; i++){
		strplus[cnt1+i] = str2[i];
	}
	
	strplus[cnt1+cnt2] = '\0';
	
	printf("%s\n",strplus);
	
	//Swapping the first character of the strings
	strplus2[0] = str2[0];
	
	for(i=1; str1[i]!=0; i++){
		strplus2[i] = str1[i];N
	}
	
	strplus2[cnt1] = ' ';
	
	strplus2[cnt1+1] = str1[0];
	
	for(i=1; str2[i]!=0; i++){
		strplus2[cnt1+i+1] = str2[i];
	}
	
	strplus2[cnt1+cnt2+1] = '\0';
	
	printf("%s",strplus2);
	
	return 0;
}