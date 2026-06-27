#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum = 0;
    int cnt = 0;

    while(cin >> s)
    {
        if(s == "caw")
        {
            cin >> s;     
            cout << sum << endl;
            sum = 0;
            cnt++;

            if(cnt == 3)
                break;
        }
        else
        {
            if(s[0] == '*') sum += 4;
            if(s[1] == '*') sum += 2;
            if(s[2] == '*') sum += 1;
        }
    }

    return 0;
}