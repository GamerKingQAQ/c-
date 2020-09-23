#include<stdio.h>

int main ()
{
	int number,n;
	int cnt=0;
	int finished=0;
	
	scanf("%d %d",&number,&n);
	int c;
	do{
	scanf("%d",&c);
	cnt++;
	if(c<0){
		printf("GameOVER");
		finished=1;
	}else if(c<number){
		printf("Too big");
	}else if(c>number){
		printf("Too small");
	}else{
		if(cnt==1){
			printf("Bigon");
		}else if(cnt<=3){
			printf("Good Luck");
		}else{
			printf("Good Guess");
		}
		finished=1;
		}
		if(cnt==n){
			if(!finished){
				printf("GameOVER");
				finished=1;
			}
		}
	}while(!finished);
	
	return 0;
 } 
