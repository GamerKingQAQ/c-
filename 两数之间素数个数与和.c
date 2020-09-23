#include <stdio.h>

int main ()
{
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int i;
	int cnt=0;
	int c=0;
	if(a==1){
		a=2;
	}
	for(i=a;i<=b;i++){
		int x;
		int isprime=1;
		for (x=2;x<i-1;x++){
			if(i%x==0){
				isprime=0;
			}
		
		}
			if(isprime==1){
				cnt++;
				c+=i;
			}
	}
	
	printf("%d  %d",cnt,c);
	
	return 0;
}
