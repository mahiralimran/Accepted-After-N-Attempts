#include<bits/stdc++.h>
using namespace std;
int main()
{
	double m;
	double arr[100];
	cin >> m;
	
	arr[0] = m;
	
	for(int i=1; i<100; i++){
		arr[i] = arr[i-1]/2;
	}
	
	for(int i=0; i<100; i++){
		cout << "N[" << i << "] = " << fixed << setprecision(4) << arr[i] << endl;
	}
	
	return 0;
}