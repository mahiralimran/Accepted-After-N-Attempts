#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int q = a / b;
    int r = a % b;

    while(r < 0)
    {
        r += abs(b);

        if(b > 0)
            q--;
        else
            q++;
    }

    cout << q << " " << r << endl;

    return 0;
}