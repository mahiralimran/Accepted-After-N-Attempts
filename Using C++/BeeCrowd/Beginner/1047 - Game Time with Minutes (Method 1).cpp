#include<iostream>
using namespace std;

int main()
{
    int sh,sm,eh,em;
    cin>>sh>>sm>>eh>>em;

    int start_total = sh * 60 + sm;
    int end_total = eh * 60 + em;

    if(end_total <= start_total){
        end_total += 24 * 60;
    }

    int total = end_total - start_total;

    int hour = total / 60;
    int min = total % 60;

    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;

    return 0;
}