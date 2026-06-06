#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,cnt=0;
	
	while(1){
		sum = 0;
		cnt = 0;
		cin >> n;
		
		if(n==0){
			break;
		}
		else if(n%2==0){
			while(1){
				if(cnt==5){
				cout << sum << endl;
				break;
				}
				cnt++;
				sum += n;
				n = n+2;
			}
		}
		else{
			n += 1;
			while(1){
				if(cnt==5){
				cout << sum << endl;
				break;
				}
				cnt++;
				sum += n;
				n = n+2;
			}
		}
	}
	
	return 0;
}