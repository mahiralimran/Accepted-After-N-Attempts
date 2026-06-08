#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	
	while(t--){
		int n,cnt=0;
		cin >> n;
		
		for(int i=2; i<n; i++){
			if(n%i==0){
				cnt++;
			}
		}
		
		if(cnt == 0){
			cout << n << " eh primo" << endl;
		}
		else{
			cout << n << " nao eh primo" << endl;
		}
	}
	
	return 0;
}