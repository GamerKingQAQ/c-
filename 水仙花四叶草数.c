#include <stdio.h>

int main ()
{
	int x;
	int sum=0;
	int n;
	int i=1;
	scanf("%d",&n);
	int first=1;
	while(i<n){
		first*=10;
		i++;
	}
	
	i=first;
	while(i<first*10){
	int	x=i;
		do{
			int a=x%10;
			x/=10;
			int b=a;
			int c=1;
			while(c<n){
				b*=a;
				c++;
			}
			sum+=b;
		}while(x>0);
	if(sum==i){
			printf("%d\n",i);	
		}
		i++;
		sum=0;
	}
	
	return 0;
}
