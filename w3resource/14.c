#include <stdio.h>

int main() {
    int distance;     
    float fuel;       
    float average;   

    
    printf("Input total distance in km: ");
    scanf("%d", &distance);

   
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

   
    if (fuel > 0) {
        average = distance / fuel;
        
        printf("Average consumption (km/l): %.2f\n", average);
    } else {
        printf("Fuel spent cannot be zero or negative.\n");
    }

    return 0;
}
