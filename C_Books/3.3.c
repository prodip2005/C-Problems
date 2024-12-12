#include<stdio.h>
int main()
{
    float x=1.234567890000,p; 
    double y=9.87654321;
    unsigned k=54321;
    long int n=1234567890;
    int m=54321;

    printf("x=%.12lf\n",x);
    printf("x=%lf\n",x);
    printf("y=%.12lf\n",y);
    printf("y=%lf\n",y);
    printf("k=%u\n",k);
    printf("n=%ld\n",n);
    printf("m=%d\n",m);
    return 0;
}

