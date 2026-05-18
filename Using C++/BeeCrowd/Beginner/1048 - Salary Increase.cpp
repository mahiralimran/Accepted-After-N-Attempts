#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sal,newsal,inc;
	cin>>sal;
	
	if(sal>=0 && sal<=400.00){
		inc = sal*0.15;
		newsal = sal + inc;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newsal<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<inc<<endl;
		cout<<"Em percentual: 15 %"<<endl;
	}
	else if(sal>400.00 && sal<=800.00){
		inc = sal*0.12;
		newsal = sal + inc;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newsal<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<inc<<endl;
		cout<<"Em percentual: 12 %"<<endl;
	}
	else if(sal>800.00 && sal<=1200.00){
		inc = sal*0.10;
		newsal = sal + inc;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newsal<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<inc<<endl;
		cout<<"Em percentual: 10 %"<<endl;
	}
	else if(sal>1200.00 && sal<=2000.00){
		inc = sal*0.07;
		newsal = sal + inc;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newsal<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<inc<<endl;
		cout<<"Em percentual: 7 %"<<endl;
	}
	else if(sal>2000.00){
		inc = sal*0.04;
		newsal = sal + inc;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newsal<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<inc<<endl;
		cout<<"Em percentual: 4 %"<<endl;
	}
	
	return 0;
}