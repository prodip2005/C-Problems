#include <stdio.h>

int main() {
    int total_days, years, months, days;

    
    printf("Input no. of days: ");
    scanf("%d", &total_days);

    
    years = total_days / 365;                
    int remaining_days = total_days % 365;   
    months = remaining_days / 30;          
    days = remaining_days % 30;            

    
    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);

    return 0;
}