#include <stdio.h>

int main ()
{
	double x;
	double cost;
	
	scanf("%lf",&x);
	
	if(x>=0){
		if(x>=50){
			cost=(0.53*50)+0.58*(x-50);
				printf("cost = %.2f",cost);
		}else{
			cost=0.53*x;
				printf("cost = %.2f",cost);
		}
	}else{
		printf("Invalid Value!");
	}
	
	
	return 0;
}
