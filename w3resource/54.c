#include<stdio.h>
int main()
{
    double centimeter_value,inch_value;
    printf("Write the Centimeter Value: ");
    scanf("%lf",&centimeter_value);
    {
       inch_value=centimeter_value/2.54;
    }
    printf("The Inch Value is %.2lf inch\n",inch_value);
    return 0;
}