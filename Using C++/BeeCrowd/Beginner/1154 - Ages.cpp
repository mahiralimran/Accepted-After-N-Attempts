#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0,sum=0;
	
	while(1){
		cin >> n;
		if(n<0){
			break;
		}
		else{
			sum += n;
			cnt++;
		}
	}
	
	double avg = (double)sum/(double)cnt;
	
	cout << fixed << setprecision(2) << avg << endl;
	
	return 0;
}