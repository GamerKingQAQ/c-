#include <stdio.h>

int main()
{
	printf ("请分别输入身高的英尺和尺寸"
	"如输入\"5 7\"来表示身高5尺7寸。") ;
	
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	
	printf("你的身高是%f米\n",
	((foot+inch/12)*0.3048));
	
	return 0;
}
