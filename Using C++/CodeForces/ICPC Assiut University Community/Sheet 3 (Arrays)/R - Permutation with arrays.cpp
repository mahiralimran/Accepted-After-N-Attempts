#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,cnt=0;
	cin >> n;
	
	long long int arra[n];
	long long int arrb[n];
	
	for(i=0; i<n; i++){
		cin >> arra[i];
	}
	
	for(i=0; i<n; i++){
		cin >> arrb[i];
	}
	
	sort(arra, arra+n);
	sort(arrb, arrb+n);

	for(i=0; i<n; i++){
    	if(arra[i] != arrb[i]){
        cnt++;
        break;
    	}
	}
	
	if(cnt==0){
		cout << "yes" << endl;
	}
	else{
		cout << "no" << endl;
	}
	
	return 0;
}