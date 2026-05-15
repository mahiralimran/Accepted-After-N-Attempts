#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,d,wei,e,nwei;
	cin>>a>>b>>c>>d;
	
	wei = (a*2 + b*3 + c*4 + d*1) / 10.00;
	
	cout<<"Media: "<<fixed<<setprecision(1)<<wei<<endl;
	
	if(wei>=7.0){
		cout<<"Aluno aprovado."<<endl;
	}
	else if(wei<5.0){
		cout<<"Aluno reprovado."<<endl;
	}
	else{
		cout<<"Aluno em exame."<<endl;
		cin>>e;
		cout<<"Nota do exame: "<<fixed<<setprecision(1)<<e<<endl;
		nwei = (wei + e) / 2;
		if(wei>=5.0){
			cout<<"Aluno aprovado."<<endl;
			cout<<"Media final: "<<fixed<<setprecision(1)<<nwei<<endl;
		}
		else if(wei<=4.9){
			cout<<"Aluno reprovado."<<endl;
			cout<<"Media final: "<<fixed<<setprecision(1)<<nwei<<endl;
		}
	}
	return 0;
}