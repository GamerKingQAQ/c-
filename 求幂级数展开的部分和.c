#include <stdio.h>
#include <math.h>
double isprime(double a);
int main (void)
{
     double x;
    double i=1.0;
     double d,e;
    double sum=1.0;
    if(scanf("%lf",&x)){};
    for(i=1;i<1000000;i++){
        e=pow(x,i);
        d=e/isprime(i);
        if(d<0.00001){
            sum+=d;
            break;
        }else {
            sum+=d;
        }
    }
    
    printf("%.4lf",sum);
    return 0;
}

double isprime(double a)
{
    double b=1.0;
    double c;
    for (c=1;c<=a;c++){
        b*=c;
    }
    return b;
}
