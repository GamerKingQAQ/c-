#include <stdio.h>

int main()
{
	int price,amount;
	printf("请输入数字");
	scanf("%d",&price);
	printf("请输入数字");
	scanf("%d",&amount) ;
	
	int change=price-amount;
	
	printf("结果%d\n.",change);
	
	return 0; 
 } 
