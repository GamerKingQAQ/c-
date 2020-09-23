#include <stdio.h>

int main ()
{
	double x;
	double result;
	
	scanf("%lf",&x);
	
	if(x==10){
		result=1/x;
	}else {
		result=x;
	}
	
	printf ("f(%.1f) = %.1f",x,result);
	
	return 0;
}
