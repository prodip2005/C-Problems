#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c,D,root1, root2;

   
    printf("Input the first number (a): ");
    scanf("%f", &a);
    printf("Input the second number (b): ");
    scanf("%f", &b);
    printf("Input the third number (c): ");
    scanf("%f", &c);

   
    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }
    

   
    D = (b * b) - (4 * a * c);

    
    if (D < 0) {
        printf("It is not possible to find the roots.\n");
    } else {
      
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

       
        printf("Root1 = %.5f\n", root1);
        printf("Root2 = %.5f\n", root2);
    }

    return 0;
}