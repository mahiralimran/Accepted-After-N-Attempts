#include<iostream>
using namespace std;
int main()
{
	int n,a,z,total=0;
	cin>>n>>a>>z;
	
	for(int i=1; i<=n; i++){
		
		int val = i;
		int sum = 0;
		while(val>0){
			sum += val%10;
			val /= 10;
		}
		
		if(sum>=a && sum<=z){
			total += i;
		}
	}
	
	cout<<total<<endl;
	
	return 0;
}