#include<iostream>
using namespace std;
int main()
{
	double v1,v2;
	cin>>v1>>v2;
	
	if(v1>0 && v2>0){
		cout<<"Q1"<<endl;
	}
	else if(v1<0 && v2>0){
		cout<<"Q2"<<endl;
	}
	else if(v1<0 && v2<0){
		cout<<"Q3"<<endl;
	}
	else if(v1>0 && v2<0){
		cout<<"Q4"<<endl;
	}
	else if(v1==0 && v2==0){
		cout<<"Origem"<<endl;
	}
	else if(v2==0 && v1>0 || v1<0){
		cout<<"Eixo X"<<endl;
	}
	else if(v1==0 && v2>0 || v2<0){
		cout<<"Eixo Y"<<endl;
	}
	
	return 0;
}