#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int year = n / 365;
	n -= year * 365;
	int mon = n / 30;
	n -= mon * 30;
	int days = n;
	
	cout<<year<<" ano(s)"<<endl;
	cout<<mon<<" mes(es)"<<endl;
	cout<<days<<" dia(s)"<<endl;
	
	return 0;
}