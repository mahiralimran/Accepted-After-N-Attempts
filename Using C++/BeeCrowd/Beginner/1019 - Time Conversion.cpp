#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int hour = n / 3600;
	n -= hour * 3600;
	int min = n / 60;
	n -= min * 60;
	int sec = n;
	
	cout<<hour<<":"<<min<<":"<<sec<<endl;
	
	return 0;
}