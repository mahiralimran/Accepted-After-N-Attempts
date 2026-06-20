#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	
	for(int i=1; i<=t; i++){
		string s1,s2;
		cin >> s1 >> s2;
		
		if(s1 == "tesoura" && s2 == "papel"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "papel" && s2 == "tesoura"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "papel" && s2 == "pedra"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "pedra" && s2 == "papel"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "pedra" && s2 == "lagarto"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "lagarto" && s2 == "pedra"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "lagarto" && s2 == "Spock"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "Spock" && s2 == "lagarto"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "Spock" && s2 == "tesoura"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "tesoura" && s2 == "Spock"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "tesoura" && s2 == "lagarto"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "lagarto" && s2 == "tesoura"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "lagarto" && s2 == "papel"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "papel" && s2 == "lagarto"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "papel" && s2 == "Spock"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "Spock" && s2 == "papel"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "Spock" && s2 == "pedra"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "pedra" && s2 == "Spock"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else if(s1 == "pedra" && s2 == "tesoura"){
			cout << "Caso #" << i << ": Bazinga!" << endl; 
		}
		else if(s1 == "tesoura" && s2 == "pedra"){
			cout << "Caso #" << i << ": Raj trapaceou!" << endl; 
		}
		
		else{
			cout << "Caso #" << i << ": De novo!" << endl;
		}
	}
	
	return 0;
}