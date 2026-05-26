#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,avg,a;

    while(1)
    {
        cin >> a;

        if(a>=0 && a<=10)
        {
            x = a;
            break;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    while(1)
    {
        cin >> a;

        if(a>=0 && a<=10)
        {
            y = a;
            break;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    avg = (x + y) / 2.0;

    cout << fixed << setprecision(2);
    cout << "media = " << avg << endl;

    return 0;
}