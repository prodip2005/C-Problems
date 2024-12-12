#include <stdio.h>

int main() {
    int num, positiveCount = 0;
    float sum = 0.0, average;

   
    for (int i = 0; i < 5; i++) {
        printf("Input the number %d: ", i + 1);
        scanf("%d", &num);

        
        if (num > 0) {
            positiveCount++;
            sum += num; 
        }
    }

    
    if (positiveCount > 0) {
        average = sum / positiveCount;
    } else {
        average = 0.0; 
    }

    //
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Average value of the said positive numbers: %.2f\n", average);

    return 0;
}