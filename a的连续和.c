#include <stdio.h>

int main ()
{
	int a ,n;
	
	scanf("%d %d",&a,&n);
	int t=a;
	int x=a;
	do {
    	t=t*10+a;
		x+=t;
		n--;
		
	}while(n!=1);
	
	printf("%d",x);
	
	return 0;
}
