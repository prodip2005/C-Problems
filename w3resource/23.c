#include <stdio.h>

int main() {
    float a, b, c;
    float perimeter;

    
    printf("Input the first number: ");
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);


    if (a + b > c && b + c > a && a + c > b) {
        perimeter = a + b + c;  
        printf("Perimeter = %.1f\n", perimeter);
    } else {
        printf(" Can't make  a triangle.\n");
    }

    return 0;
}
