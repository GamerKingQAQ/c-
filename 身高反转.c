#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d",&a);
	
	int foot=a/30.48;
	int inch=(a/30.48-foot)*12;
	
	printf("%d %d",foot, inch);
	
	return 0;
}
