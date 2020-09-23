#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a;
	printf("我已经想好了一个1-100的数了");
	
	do{
		printf("请你猜猜这个数");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("大了");
		}else  if(a<number){
			printf("小了"); 
		} 
	}while(a!=number);
	
	printf("恭喜你用%d次猜对了",count);
	
	return 0; 
	
}
