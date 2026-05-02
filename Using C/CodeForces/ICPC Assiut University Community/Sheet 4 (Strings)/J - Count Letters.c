#include<stdio.h>

char str[10000001];
long long int freq[128]; 

int main()
{ 
 	scanf("%s", str); 
 	
 	for(int i=0; i<128; i++){ 
 		freq[i] = 0; 
 	} 
 	
 	for(int i=0; str[i]!='\0'; i++){ 
 		freq[(int)str[i]]++; 
 	} 
 	
 	for(int i='a'; i<='z'; i++){ 
 		if(freq[i] > 0){ 
 		printf("%c : %lld\n",(char)i,freq[i]); 
 	}
  	} 
  	return 0; 
  }