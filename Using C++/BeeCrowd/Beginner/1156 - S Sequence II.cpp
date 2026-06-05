#include<bits/stdc++.h>
using namespace std;
int main()
{
	double s=1,even=2;
	
	for(int i=3; i<=39; i+=2){
		s += (double)i/(double)even;
		even *= 2;
	}
	
	cout << fixed << setprecision(2) << s << endl;
	
	return 0;
}