#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	double x,y,div;
	cin >> t;
	
	while(t--){
		div = 0;
		cin >> x >> y;
		
		if(x==0){
			cout << "0.0" << endl;
		}
		else if(y==0 && x!=0){
			cout << "divisao impossivel" << endl;
		}
		else{
			div = x/y;
			cout << fixed << setprecision(1) << div << endl;
		}
	}
	
	return 0;
}