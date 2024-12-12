#include <stdio.h>
int main() 
{
    int x,y;
    printf("Input the first number: \n");
    scanf("%d",&x);
    printf("Input the second number: \n");
    scanf("%d",&y);
    if(x%y==0 && x>y){
    printf("Multiplied\n");
    }
    

else if(y%x==0 && y>x){
    printf("MUltiplid\n");
    }
    else{
    printf("Not Multiplied\n");
    }return 0;

}
  