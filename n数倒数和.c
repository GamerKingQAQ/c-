#include <stdio.h>

int main ()
{
	int x;
	double a=1.0;
	double b=2.0;
	int cnt=0;
	double sum=0.0;
	double n=0;
	
	scanf("%d",&x);
	
//	do{
//		if(a>b){
//			n=a/b;
//			sum+=n;
//		b+=a;
//		}else{
//			n=b/a;
//			sum+=n;
//		a+=b;
//		}
//		cnt++;
//		
//	}while(cnt<x);
//	
//	printf("%.2f",sum);
//	
//	return 0;
//} 
// for(cnt=0;cnt<x;cnt++){
 	//if(a>b){
 	//	n=a/b;
 	//	sum+=n;
 	//	b+=a;
	// }else{
	// 	n=b/a;
	// 	sum+=n;
	// 	a+=b;
	// }
// }
for(cnt=0;cnt<x;cnt++){
	sum+=b/a;
	n=b;
	 b=a+b;
	a=n;
}
 
 printf("%.2f",sum);
 
 return 0;
}
