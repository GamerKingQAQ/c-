#include <stdio.h>

int main ()
{
	int x;
	int i;
	int isprime=1;
	
	scanf("%d",&x);
	
	for (i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			continue;//breakֱ������ 
		}
		printf("%d",i);
	}
	if(isprime==0){
	//if(i==x){
		printf("��������/n");
	}else{
		printf ("������/n");
	}
	
	return 0;
}
