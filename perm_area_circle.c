#include <stdio.h>

int main()
{
    int radius ;
    float area,perimeter;
    
    radius=6;
    perimeter=2*3.14*radius;
    area=3.14*radius*radius;
    
    printf("Perimeter of circle = %f inches\n" , perimeter);
    printf("Area of circle is = %f square inches\n", area);
    return(0);
}