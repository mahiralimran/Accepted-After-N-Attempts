#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	
	while(t--){
		string str;
		cin >> str;
		
		long long int len = str.size();
		
		if(len>10){
			cout << str[0] << len-2 << str[len-1] << endl;
		}
		else{
			cout << str << endl;
		}
	}
	
	return 0;
}
