#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, x;
    cin >> t;

    long long int mx = 0;

    while(t--){
        cin >> x;

        long long int cnt = 0;

        while(x % 2 == 0)
        {
            cnt++;
            x = x / 2;
        }

        mx = max(mx, cnt);
    }

    cout << mx << endl;

    return 0;
}