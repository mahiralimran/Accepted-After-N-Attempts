#include<iostream>
using namespace std;

int main()
{
    string dia;
    char c;
    int ds,hs,ms,ss,de,he,me,se;

    cin >> dia >> ds;
    cin >> hs >> c >> ms >> c >> ss;

    cin >> dia >> de;
    cin >> he >> c >> me >> c >> se;

    int total_start = ds*24*60*60 + hs*60*60 + ms*60 + ss;
    int total_end   = de*24*60*60 + he*60*60 + me*60 + se;

    int total = total_end - total_start;

    int days = total / (24*60*60);
    total %= (24*60*60);

    int hours = total / (60*60);
    total %= (60*60);

    int minutes = total / 60;
    int seconds = total % 60;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}