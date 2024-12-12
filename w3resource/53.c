#include<stdio.h>
int main()
{
    double p,r,t,x,interest;
    printf("Write the value of Principal: ");
    scanf("%lf",&p);
    printf("Write the value of Interest rate: ");
    scanf("%lf",&r);
    printf("Write the value of time: ");
    scanf("%lf",&t);
    {
        x=p*r*t;
        interest=x/100;
    }
    printf("The Interest is %.2lf\n",interest);
    return 0;
}