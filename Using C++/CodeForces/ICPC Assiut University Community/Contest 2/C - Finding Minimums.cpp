#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,m;
    cin>>n>>k;

    long long int min;
    int cnt = 0;

    for(int i=1; i<=n; i++)
    {
        cin >> m;

        if(cnt == 0)
        {
            min = m;
        }

        if(min > m)
        {
            min = m;
        }

        cnt++;

        if(cnt == k)
        {
            cout << min << " ";

            cnt = 0;
        }
    }

    if(cnt > 0)
    {
        cout << min;
    }

    return 0;
}