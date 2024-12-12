#include <stdio.h>

int main() 
{
    float radius=6,Perimeter,Area,pi=3.1416;
    {
        Perimeter=2*pi*radius;
        printf("The Perimeter of the circle is %f\n",Perimeter);
    }
    {
        Area=pi*radius*radius;
        printf("The Area of the Circle is %f\n",Area);
    }
    return(0);
}