#include <stdio.h>

int main ()
{
	int a =0,b=0;
	
	while(++a>0);
			printf("int的最大整数为%d",a-1)	;
			b++;
	
	while ((a=a/10)!=0){
		b++;
	}
	printf("int的位数是%d",b);
	
	return 0;
}
