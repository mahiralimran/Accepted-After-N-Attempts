#include<bits/stdc++.h>
using namespace std;
int main()
{
	int in,gre,n,game=0,in_win=0,gre_win=0,draw=0;
	
	cin >> in >> gre;
	game++;
	cout << "Novo grenal (1-sim 2-nao)" << endl;
	
	if(in>gre){
		in_win++;
	}
	else if(gre>in){
		gre_win++;
	}
	else{
		draw++;
	}
	
	while(1){
		cin >> n;
	
		if(n==1){
			cin >> in >> gre;
			game++;
			cout << "Novo grenal (1-sim 2-nao)" << endl;
	
			if(in>gre){
				in_win++;
			}
			else if(gre>in){
				gre_win++;
			}
			else{
				draw++;
			}
		}
		else{
			break;
		}
	}
	
	cout << game << " grenais" << endl;
	cout << "Inter:" << in_win << endl;
	cout << "Gremio:" << gre_win << endl;
	cout << "Empates:" << draw << endl;
	
	if(in_win > gre_win){
		cout << "Inter venceu mais" << endl;
	}
	else if(in_win < gre_win){
		cout << "Gremio venceu mais" << endl;
	}
	else{
		cout << "Não houve vencedor" << endl;
	}
	
	return 0;
}