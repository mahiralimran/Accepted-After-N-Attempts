#include<stdio.h>
#include<string.h>
int main()
{
	int cnt1=0,cnt2=0;
	char str1[11],str2[11];
	char strplus1[22] = {'\0'};
	char strplus2[22] = {'\0'};
	scanf("%s", str1);
	scanf("%s", str2);
	
	//Counting the Strings
	cnt1 = strlen(str1);
	cnt2 = strlen(str2);
	
	printf("%d %d\n",cnt1,cnt2);
	
	//Concating 2 Strings
	strcat(strplus1,str1);
	strcat(strplus1,str2);
	printf("%s\n",strplus1);
	
	//Swapping the first character of the strings
	strcat(strplus2,str1);
	strplus2[0] = str2[0];
	strplus2[cnt1] = ' ';
	strcat(strplus2,str2);
	strplus2[cnt1+1] = str1[0];
	strplus2[cnt1+cnt2+1] = '\0';

	printf("%s\n",strplus2);
	
	return 0;
}