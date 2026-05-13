#include<iostream>
using namespace std;
int main()
{
	double n;
	cin>>n;
	
	int note = n;
	int coin = n * 100 - note * 100;

	int onehun = note / 100;
	note -= onehun * 100;
	int fifty = note / 50;
	note -= fifty * 50;
	int twenty = note / 20;
	note -= twenty * 20;
	int ten = note / 10;
	note -= ten * 10;
	int five = note / 5;
	note -= five * 5;
	int two = note / 2;
	note -= two * 2;
	int one = note;
	
	cout<<"NOTAS:"<<endl;
	cout<<onehun<<" nota(s) de R$ 100.00"<<endl;
	cout<<fifty<<" nota(s) de R$ 50.00"<<endl;
	cout<<twenty<<" nota(s) de R$ 20.00"<<endl;
	cout<<ten<<" nota(s) de R$ 10.00"<<endl;
	cout<<five<<" nota(s) de R$ 5.00"<<endl;
	cout<<two<<" nota(s) de R$ 2.00"<<endl;

	coin += one * 100;
	int onehunc = coin / 100;
	coin -= onehunc * 100;
	int fiftyc = coin / 50;
	coin -= fiftyc * 50;
	int twentyc = coin / 25;
	coin -= twentyc * 25;
	int tenc = coin / 10;
	coin -= tenc * 10;
	int fivec = coin / 5;
	coin -= fivec * 5;
	int onec = coin / 1;
	
	cout<<"MOEDAS:"<<endl;
	cout<<onehunc<<" moeda(s) de R$ 1.00"<<endl;
	cout<<fiftyc<<" moeda(s) de R$ 0.50"<<endl;
	cout<<twentyc<<" moeda(s) de R$ 0.25"<<endl;
	cout<<tenc<<" moeda(s) de R$ 0.10"<<endl;
	cout<<fivec<<" moeda(s) de R$ 0.05"<<endl;
	cout<<onec<<" moeda(s) de R$ 0.01"<<endl;
	
	return 0;
}