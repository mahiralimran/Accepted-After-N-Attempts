#include<iostream>
using namespace std;

int main()
{
    long long int n,i,fib;

    cin>>n;

    long long int fib1 = 0,fib2 = 1;

    if(n==1)
    {
        cout << 0 << endl;
    }
    else if(n==2)
    {
        cout << 0 << " " << 1 << endl;
    }
    else
    {
        cout << fib1 << " ";
        cout << fib2 << " ";

        for(i=3; i<=n; i++)
        {
            fib = fib1 + fib2;

            cout << fib << " ";

            fib1 = fib2;
            fib2 = fib;
        }
    }

    return 0;
}