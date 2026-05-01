#include<stdio.h>
int main()
{
	int n,m,i,val=0;
	scanf("%d %d",&n,&m);
	int arr[n], freq[m+1];
	
	for(i=0; i<=m; i++){
		freq[i] = 0;
	}
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		val = arr[i];
		freq[val]++;
	}
	
	for(i=1; i<=m; i++){
		printf("%d\n",freq[i]);
	}
	
	return 0;
}