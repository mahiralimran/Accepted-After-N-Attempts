#include<iostream>
using namespace std;
int main()
{
	int n,temp,onehun,fifty,twenty,ten,five,two,one;
	cin>>n;
	
	temp = n;
	
	onehun = n / 100;
	n = n - (onehun * 100);
	fifty = n / 50;
	n = n - (fifty * 50);
	twenty = n / 20;
	n = n - (twenty * 20);
	ten = n / 10;
	n = n - (ten * 10);
	five = n / 5;
	n = n - (five * 5);
	two = n / 2;
	n = n - (two * 2);
	one = n;
	
	cout<<temp<<endl;
	cout<<onehun<<" nota(s) de R$ 100,00"<<endl;
	cout<<fifty<<" nota(s) de R$ 50,00"<<endl;
	cout<<twenty<<" nota(s) de R$ 20,00"<<endl;
	cout<<ten<<" nota(s) de R$ 10,00"<<endl;
	cout<<five<<" nota(s) de R$ 5,00"<<endl;
	cout<<two<<" nota(s) de R$ 2,00"<<endl;
	cout<<one<<" nota(s) de R$ 1,00"<<endl;
	
	return 0;
}