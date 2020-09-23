#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d",&a);
	
	int b=a/100;
	int c=a%100;
	int d=c/10;
	int e=c%10;
	
	printf("%d",e*100+d*10+b);
	
	return 0;
}
