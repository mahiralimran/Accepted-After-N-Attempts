#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,years=0;
	cin >> t;
	
	while(t--){
		years = 0;
		double pa,pb,ga,gb;
		cin >> pa >> pb >> ga >> gb;
		
		while(1){
			pa +=  (int)(pa * ga /100.0);
			pb +=  (int)(pb * gb /100.0);
			
			years++;
			
			if(years>100 || pa>pb){
				break;
			}
		}
		
		if(years > 100){
			cout << "Mais de 1 seculo." << endl;
		}
		else{
			cout << years << " anos." << endl;
		}
	}
	
	return 0;
}