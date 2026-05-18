#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	
	long long int cnt=0,i,start=0;
	long long int len = str.length();

	for(i=0; str[i]!='\0'; i++){
		if(str[i]==str[len-1-i]){
			cnt++;
		}
	}
	
	while(1){
		if(str[len-1-start]=='0'){
			start++;
		}
		else{
			break;
		}
	}
	
	for(i=len-1-start; i>=0; i--){
		cout<<str[i];
	}
	
	cout<<endl;
	
	if(cnt==len){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}