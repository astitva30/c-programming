#include <stdio.h>
int main()
{
    float c,f;
    printf("\nEnter temperature in celsius:");
    scanf("%f",&c);
    f=1.8*c+32;

    printf("\nThe temperature incelcius is %f",f);
    return(0);

}