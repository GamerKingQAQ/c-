#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h,i;
	
	scanf ("%d ",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf ("%d",&d);
	scanf ("%d",&e);
	scanf ("%d",&f);
	scanf ("%d",&g);	
	scanf ("%d",&h);
	scanf ("%d",&i);
	
	int o=(a*e*i)+(b*f*g)+(d*h*c)-(c*e*g)-(b*d*i)-(f*h*a);
	
	printf("%d",o);
	
	return 0;

}
