#include <stdio.h>
#include <math.h>

int main ()
{
	double x;
	double result;
	double sq;
	double pw;
	double a;
	
	scanf("%lf",&x);
	
	pw=pow((x+1),2);
	 a=pw+2*x+1/x;
	sq=sqrt(x);
	
	if (x>=0){
		result=sq;
	}else {
		result=a;
	}
	
	printf ("f(%.2f) = %.2f",x,result);
	
	return 0;
}
