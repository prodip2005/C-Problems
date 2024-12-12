#include<stdio.h>
int main()
{
 
    float x,n,i,s=0;
    printf("enter: ");
    scanf("%f",&n);
    
        for ( i = 1; i <=n; i++)
        {
            x=1/i;
            s=s+x;
        }
        printf("ans is %f\n",s);
    

}