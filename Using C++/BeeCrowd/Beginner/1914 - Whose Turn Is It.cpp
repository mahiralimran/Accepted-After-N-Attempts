#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	
	while(t--){
		string n1,g1,n2,g2;
		cin >> n1 >> g1 >> n2 >> g2;

		int ng1,ng2;
		cin >> ng1 >> ng2;
		
		if((ng1+ng2)%2==0){
			if(g1=="PAR"){
				cout << n1 << endl;
			}
			else{
				cout << n2 << endl;
			}
		}
		else{
			if(g1=="IMPAR"){
				cout << n1 << endl;
			}
			else{
				cout << n2 << endl;
			}
		}
	}
	
	return 0;
}