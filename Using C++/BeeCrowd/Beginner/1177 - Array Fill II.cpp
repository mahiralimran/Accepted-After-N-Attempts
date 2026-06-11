#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	cin >> n;
	
	int arr[1000];
	
	for(int i=0; i<1000; i++){
		if(cnt==n){
			cnt = 0;
		}
		
		arr[i] = cnt;
		cnt++;
	}
	
	for(int i=0; i<1000; i++){
		cout << "N[" << i << "] = " << arr[i] << endl;
	}
	
	return 0;
}