#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n;
	cin>>n;
	
	int solid = n;
	double remain = n - solid;
	
	if(remain>0){
		cout<<"float "<<solid<<" "<<fixed<<setprecision(3)<<remain<<endl;
	}
	else{
		cout<<"int "<<solid<<endl;
	}
	
	return 0;
}