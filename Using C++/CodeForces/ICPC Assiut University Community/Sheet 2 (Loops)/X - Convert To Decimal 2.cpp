#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin>>n;

        int ones = 0;

        while(n>0)
        {
            if(n % 2 == 1)
            {
                ones++;
            }

            n /= 2;
        }

        long long ans = 1;

        for(int i=0; i<ones; i++)
        {
            ans *= 2;
        }

        ans = ans - 1;

        cout<<ans<<endl;
    }

    return 0;
}