#include <stdio.h>

int main ()
{
	int x;
	
	scanf("%d",&x);
	int i,j,k;
	int cnt =0;
	
//	i=x;
//	while(i<=x+3){
//		j=x;
//		while(j<=x+3){
//			k=x;
//			while(k<=x+3){
//				if(i!=j && j!=k && i!=k){
//				//	if(j!=k){
//						//if(i!=k){
//							cnt++;
//							printf("%d%d%d",i,j,k);
//							if(cnt==6){
//								printf("\n");
//								cnt=0;
//							} else{
//								printf(" ");
//							}
//										
//				}
//			k++;
//			}
//		j++;
//		}
//	i++;
//	}

for(i=x;i<=x+3;i++){
	for(j=x;j<=x+3;j++){
		for(k=x;k<=x+3;k++){
		if(i!=j && j!=k && k!=i){
			cnt++;
			printf("%d%d%d",i,j,k);
			if(cnt==6){
				printf("\n");
				cnt=0;
			}else{
				printf(" ");
			}
			}
		}
	}
}
	
	
	return 0;
	
}
