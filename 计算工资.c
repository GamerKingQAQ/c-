#include <stdio.h>

int main()
{
	const double rate=30;
	const int standard=40;
	double pay=0.00;
	int hours;
	
	printf("�����빤����Сʱ��");
	scanf("%d",&hours);
	printf("\n");
	if(hours>standard){
		pay=rate*standard+(rate*1.5)*(hours-standard);
	}else{
		pay=rate*hours;
	}
	
	printf("��Ĺ���Ϊ%fԪ",pay);
	
	return 0;
}
