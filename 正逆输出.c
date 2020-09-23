#include <stdio.h>

int main ()//Ä©Î²ÎŞ0µÄÊı×Ö 
{
//	int i;
//	int n;
//	int digit;
//	int ret;
	
//	scanf("%d",&n);
//		while(n>0){
 //       digit=n%10;
//		ret=ret*10+digit;
  //      n/=10;
//	} 
//	do{
//		i=ret%10;
//		printf("%d",i);
//			if(ret>=10){
//			printf(" ");
//		}
 //       ret/=10;
//	}while(ret>0);
//	
//	printf("\n");
	
//	return 0;
int n;

scanf("%d",&n);

int i;
int x=n;
int mask=1;

while(n>9){
	n/=10;
	mask*=10;
}

do{
	i=x/mask;
	printf("%d",i);
	if(mask>9){
		printf(" ");
	}
	x%=mask;
	mask/=10;;
}while(mask>0);

return 0;
}
