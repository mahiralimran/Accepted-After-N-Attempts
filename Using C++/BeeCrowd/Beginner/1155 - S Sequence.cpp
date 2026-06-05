#include<bits/stdc++.h>
using namespace std;
int main()
{
	double s=0;
	
	for(int i=1; i<=100; i++){
		s += (double)1/(double)i;
	}
	
	cout << fixed << setprecision(2) << s << endl;
	
	return 0;
}