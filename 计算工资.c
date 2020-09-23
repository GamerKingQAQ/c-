#include <stdio.h>

int main()
{
	const double rate=30;
	const int standard=40;
	double pay=0.00;
	int hours;
	
	printf("请输入工作的小时数");
	scanf("%d",&hours);
	printf("\n");
	if(hours>standard){
		pay=rate*standard+(rate*1.5)*(hours-standard);
	}else{
		pay=rate*hours;
	}
	
	printf("你的工资为%f元",pay);
	
	return 0;
}
