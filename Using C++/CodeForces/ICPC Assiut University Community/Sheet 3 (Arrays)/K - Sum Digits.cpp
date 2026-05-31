#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,val,sum=0;
	cin >> n;
	
	char str[n+1];
	cin >> str;
	
	for(i=0; str[i]!='\0'; i++){
		val = str[i] - '0';
		sum += val;
	}
	
	cout << sum << endl;
	
	return 0;
}