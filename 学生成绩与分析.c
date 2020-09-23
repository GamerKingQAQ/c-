#include<stdio.h>

int main (void)
{
    int i;
    int n;
    int c=0;
    double sum=0.0;
    double a; 
    if(scanf("%d",&n)){};
    if(n==0){
        c=0;
        sum=0.0;
    }else{
	for(i=1;i<=n;i++){
        int x;
        if(scanf("%d",&x)){};
        sum=sum+x;
        x=x/10;
        if(x>=6){
            c++;
        }
    }
	a=sum/(n*1.0);  
    }
    printf("average = %.1f\n",a);
    printf("count = %d",c);
    return 0;
}
