#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,z;
	cin >> x >> z;
	
	if(x<=z){
		for(int i=x+1; i<z; i++){
			if(i%5==2 || i%5==3){
				cout << i << endl;
			}
		}
	}
	else{
		for(int i=z+1; i<x; i++){
			if(i%5==2 || i%5==3){
				cout << i << endl;
			}
		}
	}
	
	return 0;
}