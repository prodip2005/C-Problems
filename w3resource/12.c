#include <stdio.h>

int main() {
    char employeeID[11];  
    int workingHours;
    float salaryPerHour, totalSalary;

    
    printf("Input the Employee's ID (Max. 10 chars): ");
    scanf("%s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%f", &salaryPerHour);

   
    totalSalary = workingHours * salaryPerHour;

    
    printf("Employee's ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", totalSalary);

    return 0;
}
