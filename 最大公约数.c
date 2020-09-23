#include <stdio.h>

int main ()
{//枚举法 
	//int a,b;
//	int x;
	
//	scanf("%d %d",&a,&b);
	
//	if(a>b){
//		x=b;
//	}else{
//		x=a;
//	}
	
//	int i;
//	int n=0;
//	for(i=1;i<=x;i++){
//		if(a%i==0){
//			if(b%i==0){
//				n=i;
//			}
//		}
//	}
	
//	printf("%d",n);
	
//	return 0;
//辗转相除法 
	
	int a,b;
	int x;
	
	scanf("%d %d",&a,&b);
	
	 while (b!=0){
	 	x=a%b;
	 	a=b;
	 	b=x;
	 }
	 
	 printf("%d",a);
	 
	 return 0;
}
