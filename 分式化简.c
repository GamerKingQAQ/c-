#include <stdio.h>

int main()
{
	int a,b;
	int x;
	
	scanf("%d/%d",&a, &b);
	int c=a;
	int d=b;
	
	while (b!=0){
		x=a%b;
		a=b;
		b=x;
	}
	
	printf("%d/%d",c/a,d/a);
	
	return 0;
	
}
