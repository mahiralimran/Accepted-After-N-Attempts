#include<bits/stdc++.h>
using namespace std;
int main()
{
	double t,total=0,amm,coelho=0,rato=0,sapo=0;
	char animal;
	
	cin >> t;
	
	while(t--){
		cin >> amm >> animal;
		
		if(animal == 'C'){
			total += amm;
			coelho += amm;
		}
		else if(animal == 'R'){
			total += amm;
			rato += amm;
		}
		else if(animal == 'S'){
			total += amm;
			sapo += amm;
		}
	}
	
	cout << "Total: " << total << " cobaias" <<endl;
	
	cout << "Total de coelhos: " << coelho <<endl;
	cout << "Total de ratos: " << rato <<endl;
	cout << "Total de sapos: " << sapo <<endl;
	
	double percoelho = (coelho/total) * 100.00;
	double perrato = (rato/total) * 100.00;
	double persapo = (sapo/total) * 100.00;
	
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << percoelho << " %" <<endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << perrato << " %" <<endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << persapo << " %" <<endl;
	
	return 0;
}