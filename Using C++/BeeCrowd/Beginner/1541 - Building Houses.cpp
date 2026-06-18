#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    while(cin >> a >> b >> c)
    {
        if(a==0)
        	break;

        double area = (a * b * 100.0) / c;

        cout << (int)sqrt(area) << endl;
    }

    return 0;
}