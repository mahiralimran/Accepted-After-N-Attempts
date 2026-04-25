#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int fidi = n/10;
	int sedi = n - fidi*10;

	if((sedi != 0 && fidi % sedi == 0) || (fidi != 0 && sedi % fidi == 0)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

	return 0;
}
