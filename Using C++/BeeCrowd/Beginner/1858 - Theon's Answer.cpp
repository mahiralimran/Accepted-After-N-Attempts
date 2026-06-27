#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ind=0;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int mn = arr[0];
    
    for(int i=0; i<n; i++){
        if(mn > arr[i]){
            mn = arr[i];
            ind = i;
        }
    }
    
    cout << ind+1 << endl;
    
    return 0;
}