#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,flag=0,val=0,cnt=0;
	cin >> a >> b;
	string str;
	cin >> str;
	
	if(str[a] == '-'){
		flag = 1;
	}
	
	if(flag==1){
		for(int i=a+1; str[i]!='\0'; i++){
			val = str[i] - '0';
			if(val>=0 && val<=9){
				cnt++;
			}
		}
	}
	
	if(flag==1 && cnt==b){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}