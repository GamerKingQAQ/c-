#include <stdio.h>
#include <math.h>

int  main ()
{
    int money;
    double  year;
    double rate;
    double pw;
    scanf("%d %lf %lf",&money,&year,&rate);
    pw= pow((rate+1),year);

    double interest=money*pw-money;

    printf("interest = %.2f",interest);

    return 0;
}
