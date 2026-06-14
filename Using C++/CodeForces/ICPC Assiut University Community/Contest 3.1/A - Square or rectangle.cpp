#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,b;
	cin >> t;
	
	while(t--){
		cin >> a >> b;
		if(a==b){
			cout << "Square" << endl;
		}
		else{
			cout << "Rectangle" << endl;
		}
	}
	
	return 0;
}
