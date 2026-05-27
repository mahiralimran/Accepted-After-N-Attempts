#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,n,m,avg;
	
	while(1){
		cin >> n;
		
		if(n>=0 && n<=10){
			x = n;
			break;
		}
		else{
			cout << "nota invalida" << endl; 
		}
	}
	while(1){
		cin >> n;
		
		if(n>=0 && n<=10){
			y = n;
			break;
		}
		else{
			cout << "nota invalida" << endl; 
		}
	}
	
	avg = (x + y) / 2.00;
	cout << "media = " << fixed << setprecision(2) << avg << endl;
	
	while(1){
		cin >> m;
		if(m==1){
			cout << "novo calculo (1-sim 2-nao)" << endl;
			
			while(1){
				cin >> n;
		
				if(n>=0 && n<=10){
					x = n;
					break;
				}
				else{
					cout << "nota invalida" << endl; 
				}
			}
			while(1){
				cin >> n;
		
				if(n>=0 && n<=10){
					y = n;
					break;
				}
				else{
					cout << "nota invalida" << endl; 
				}
			}
	
			avg = (x + y) / 2.00;
			cout << "media = " << fixed << setprecision(2) << avg << endl;
		}
		else if(m!=1 && m!=2){
			cout << "novo calculo (1-sim 2-nao)" << endl;
		}
		else{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			break;
		}
	}
	
	return 0;
}