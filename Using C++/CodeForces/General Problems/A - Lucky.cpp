#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	while(n--){
		int hsum=0, fsum=0;
		string str;
		cin >> str;
		
		for(int i=0; i<3; i++){
			hsum += (str[i] - '0');
		}
		
		for(int i=3; i<6; i++){
			fsum += (str[i] - '0');
		}
		
		if(hsum == fsum){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}