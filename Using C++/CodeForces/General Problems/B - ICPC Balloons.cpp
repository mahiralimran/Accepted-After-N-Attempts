#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	
	while(t--){
		int n,poin=0;
		cin >> n;
		
		string str;
		cin >> str;
		
		int freq[122];
		for(int i=0; i<123; i++){
			freq[i] = 0;
		}
		
		for(int i=0; i<n; i++){
			int val = str[i];
			freq[val]++;
		}
		
		for(int i=0; i<123; i++){
			if(freq[i] > 0){
				poin += 2;
				freq[i] -= 1;
			}
		}
		
		for(int i=0; i<123; i++){
			if(freq[i] > 0){
				poin += freq[i];
			}
		}
		
		cout << poin << endl;
	}
	
	return 0;
}