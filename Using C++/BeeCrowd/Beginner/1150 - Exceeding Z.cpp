#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,z,sum=0,nextx=0,cnt=0;
	cin >> x;
	
	nextx = x;
	
	while(1){
		cin >> z;
		if(z>x){
			break;
		}
		else{
			continue;
		}
	}

	while(1){
		sum += nextx;
		nextx++;
		cnt++;
		
		if(sum>z){
			break;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}