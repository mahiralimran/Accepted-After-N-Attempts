#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,z,sum=0;
	cin >> a;
	
	while(1){
		cin >> z;
		if(z<=0){
			continue;
		}
		else{
			break;
		}
	}
	
	for(int i=a; i<a+z; i++){
		sum += i;
	}
	
	cout << sum << endl;
	
	return 0;
}