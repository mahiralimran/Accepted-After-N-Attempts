#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,remi=0;
	cin >> n;
	
	string hex,rm;
	
	while(1){
		remi = n%16;
		
		if(remi>=0 && remi<=9){
			rm = to_string(remi);
			hex += rm;
		}
		else if(remi == 10){
			rm = "A";
			hex += rm;
		}
		else if(remi == 11){
			rm = "B";
			hex += rm;
		}
		else if(remi == 12){
			rm = "C";
			hex += rm;
		}
		else if(remi == 13){
			rm = "D";
			hex += rm;
		}
		else if(remi == 14){
			rm = "E";
			hex += rm;
		}
		else if(remi == 15){
			rm = "F";
			hex += rm;
		}
		
		n = n/16;
		
		if(n==0){
			break;
		}
	}
	
	reverse(hex.begin(), hex.end());
	
	cout << hex << endl;
	
	return 0;
}