#include<iostream>
using namespace std;
int main()
{
	long long int m,i,n,num,flag,digit,exflag,null=0;
	cin>>m>>n;
	
	for(i=m; i<=n; i++){	
		num = i;
		flag = 0;
		exflag = 0;
		
		while(num>0){
			digit = num%10;
			
			if(digit==4 || digit==7){
				flag++;
			}
			else{
				exflag++;
			}
			
			num /= 10;
		}
		if(flag>0 && exflag==0){
			cout<<i<<" ";
			null++;
		}
	}
	
	if(null==0){
		cout<<"-1"<<endl;
	}

	return 0;
}