#include<stdio.h>
void value_swap(int a,int b){
	int temp = a;
	a = b;
	b = temp;
	
	printf("%d %d\n",a,b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	value_swap(a,b);
	
	return 0;
}