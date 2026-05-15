#include<iostream>
using namespace std;

int main()
{
    long long int e,m,b;

    cin>>e>>m>>b;

    long long int ans = min(e,min(m,b));

    e -= ans;
    m -= ans;
    b -= ans;

    ans += min(e / 2, b);

    cout<<ans<<endl;

    return 0;
}