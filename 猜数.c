#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a;
	printf("���Ѿ������һ��1-100������");
	
	do{
		printf("����²������");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("����");
		}else  if(a<number){
			printf("С��"); 
		} 
	}while(a!=number);
	
	printf("��ϲ����%d�β¶���",count);
	
	return 0; 
	
}
