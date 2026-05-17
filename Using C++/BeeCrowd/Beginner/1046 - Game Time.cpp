#include<iostream>
using namespace std;
int main()
{
	int st,et,tp;
	cin>>st>>et;
	
	if(st>et){
		tp = (24-st) + et;
		cout<<"O JOGO DUROU "<<tp<<" HORA(S)"<<endl;
	}
	else if(st<et){
		tp = (24-st) - (24-et);
		cout<<"O JOGO DUROU "<<tp<<" HORA(S)"<<endl;
	}
	else{
		tp = 24;
		cout<<"O JOGO DUROU "<<tp<<" HORA(S)"<<endl;
	}
	
	return 0;
}