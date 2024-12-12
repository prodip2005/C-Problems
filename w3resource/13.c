#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Input the First Integer: \n");
    scanf("%d",&x);
    printf("Input the Second Integer: \n");
    scanf("%d",&y);
    printf("Input the Third Integer: \n");
    scanf("%d",&z);
    if(x>y && x>z)
    printf("Maximum value of three integers:%d\n",x);
    else if(y>x && y>z)
    printf("Maximum value of three integers:%d\n",y);
    else
    printf("Maximum value of three integers:%d\n",z);
    
    return 0;
}