#include <stdio.h>

int main() {
    int num1, num2;

  
    printf("Input first number of the pair: ");
    scanf("%d", &num1);

   
    printf("Input second number of the pair: ");
    scanf("%d", &num2);

    
    if (num1 < num2) {
        printf("The pair is in ascending order!\n");
    } else if (num1 > num2) {
        printf("The pair is in descending order!\n");
    } else {
        printf("The pair is neither in ascending nor descending order, as both numbers are equal!\n");
    }

    return 0;
}