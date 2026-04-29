#include<stdio.h>
int main()
{
    long long int n,i,j,match=0;
    scanf("%lld",&n);

    long long int arr[n], revarr[n];

    for(i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }

    for(i=0; i<n; i++){
        revarr[i] = arr[n-1-i];
    }

    for(i=0; i<n; i++){
        if(arr[i] == revarr[i]){
            match++;
        }
    }

    if(match == n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
