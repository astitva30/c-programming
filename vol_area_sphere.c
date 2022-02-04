#include <stdio.h>

int main()
{
    int radius ;
    float area,volume;
    
    printf("ENTER THE radius: ");
    scanf("%d", &radius);

    volume=(4.186*radius*radius*radius);
    area=12.56*radius*radius;
    
    printf("Volume of sphere = %f cubic cm\n" , volume);
    printf("Area of sphere is = %f square cm\n", area);
    return(0);
}