#include<stdio.h>
int main()
 {
    int number[5];
    printf("enter the value: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&number[i]);
    }
    
     int x=number[0];
     int po=0;
     for (int i = 1; i <5; i++)
     {
        if (x>number[i])
        {
            x=number[i];
            po=i;
        }
        
     }
     printf("%d %d\n",x,po+1);
     
        return 0;
 }