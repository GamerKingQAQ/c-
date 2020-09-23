#include <stdio.h>

int main()
{
	double sum=0;
	double a;
	int n=0;
	
	scanf("%lf",&a);
	while(a!=-1){
		sum+=a;
		n++;
		scanf("%lf",&a); 
	}
	printf("%f",sum/n);
	
	return 0;
}
