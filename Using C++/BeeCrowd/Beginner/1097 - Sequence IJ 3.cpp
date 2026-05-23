#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7;
	
	for(int i=1; i<=9; i=i+2){
		for(int j=n; j>=n-2; j--){
			cout << "I=" << i << " J=" << j <<endl;
		}
		n += 2;
	}
	
	return 0;
}