#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y,sum=0,cnt=0;
	cin >> t;
	
	while(t--){
		sum = 0;
		cnt = 0;
		cin >> x >> y;
		
		if(x%2!=0){
			while(1){
				if(cnt==y){
					break;
				}
				cnt++;
				sum += x;
				x = x+2;
			}
			cout << sum << endl;
		}
		else{
			x += 1;
			while(1){
				if(cnt==y){
					break;
				}
				cnt++;
				sum += x;
				x = x+2;
			}
			cout << sum << endl;

		}
	}
	
	return 0;
}