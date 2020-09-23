#include <stdio.h>

int main ()
{
    int a=152;
    int b=a/100;
    int c=a%100;
    int d=c/10;
    int e=c%10;

    printf("152 = %d + %d + %d",e,d*10,b*100);

    return 0;
}
