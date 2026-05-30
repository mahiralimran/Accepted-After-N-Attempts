#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,val=1;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=3; j++){
			cout << val << " ";
			val++;
		}
		cout << "PUM" << endl;
		val++;
	}
	
	return 0;
}