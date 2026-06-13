#include<bits/stdc++.h>
using namespace std;
int main()
{
	double arr[12][12];
	
	int row,i,j;
	cin >> row;
	
	string task;
	cin >> task;
	
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			cin >> arr[i][j];
		}
	}
	
	if(task == "S"){
		double sum = 0;
		for(i=0; i<12; i++){
			sum += arr[row][i];
		}
		
		cout << fixed << setprecision(1) << sum << endl;
	}
	else{
		double sum = 0;
		for(i=0; i<12; i++){
			sum += arr[row][i];
		}
		
		cout << fixed << setprecision(1) << sum/12.0 << endl;
	}
	
	return 0;
}