#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,alc=0,gas=0,die=0;
	
	while(1){
		cin >> n;
		
		if(n<1 || n>4){
			continue;
		}
		if(n==1){
			alc++;
		}
		else if(n==2){
			gas++;
		}
		else if(n==3){
			die++;
		}
		else if(n==4){
			break;
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc <<endl;
	cout << "Gasolina: " << gas <<endl;
	cout << "Diesel: " << die <<endl;
	
	return 0;
}