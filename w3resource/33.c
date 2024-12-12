#include <stdio.h>

int main() {
    int n = 5;
    int numbers[n]; 
    int highest, position;

   
    printf("Input %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    highest = numbers[0];
    position = 1;


    for (int i = 1; i < n; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
            position = i + 1;
        }
    }


    printf("Highest value: %d\n", highest);
    printf("Position: %d\n", position);

    return 0;
}