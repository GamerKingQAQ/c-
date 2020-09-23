#include <stdio.h>

int main ()
{
	int n;
	int i;
	double sum=0.0;
	int sign=1;//用于正负相加 
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*(1.0/i);
		sign=-sign;
	}
	
	printf("f(%d)=%f",n,sum);
	
	return 0;
}
