#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	while(cin >> t){
		int arr[t];
		for(int i=0; i<t; i++){
			cin >> arr[i];
		}
		
		int lvl = 0, clvl = 0;
		
		for(int i=0; i<t; i++){
			if(arr[i]<10){
				clvl = 1;
				if(clvl > lvl){
					lvl = clvl;
				}
			}
			else if(arr[i]>=10 && arr[i]<20){
				clvl = 2;
				if(clvl > lvl){
					lvl = clvl;
				}
			}
			else if(arr[i]>=20){
				clvl = 3;
				if(clvl > lvl){
					lvl = clvl;
				}
			}
		}
		cout << lvl << endl;
	}
	
	return 0;
}