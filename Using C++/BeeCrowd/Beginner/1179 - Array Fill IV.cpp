#include<bits/stdc++.h>
using namespace std;
int main()
{
    int even[5], odd[5];
    int e = 0, o = 0;

    for(int i = 0; i < 15; i++)
    {
        int m;
        cin >> m;

        if(m % 2 == 0)
        {
            even[e] = m;
            e++;

            if(e == 5)
            {
                for(int j = 0; j < 5; j++)
                {
                    cout << "par[" << j << "] = " << even[j] << endl;
                }
                e = 0;
            }
        }
        else
        {
            odd[o] = m;
            o++;

            if(o == 5)
            {
                for(int j = 0; j < 5; j++)
                {
                    cout << "impar[" << j << "] = " << odd[j] << endl;
                }
                o = 0;
            }
        }
    }

    for(int i = 0; i < o; i++)
    {
        cout << "impar[" << i << "] = " << odd[i] << endl;
    }

    for(int i = 0; i < e; i++)
    {
        cout << "par[" << i << "] = " << even[i] << endl;
    }

    return 0;
}