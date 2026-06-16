#include<bits/stdc++.h>
using namespace std;
int main()
{
	double arr[12][12];
	string task;
	cin >> task;
	
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin >> arr[i][j];
		}  
	}
	
	double sum = 0;
	for(int i=0; i<12; i++){
    	for(int j=0; j<12; j++){
        	if(i > 4 && i > j && j > 11-i){
            	sum += arr[i][j];
        	}
		}
	}

	if(task == "S")
    	cout << fixed << setprecision(1) << sum << endl;
	else
    	cout << fixed << setprecision(1) << sum/30.0 << endl;
	
	return 0;
}