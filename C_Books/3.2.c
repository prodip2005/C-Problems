#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x<100)
    printf("%d is smaller than 100\n",x);
    else
    printf("%d contains more than two digits\n",x);
    return 0;
}