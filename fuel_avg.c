#include<stdio.h>
int main()
{
    int distance;
    float fuel;
    printf("\nInput total distance in km: ");
    scanf("%d",&distance);
    printf("\nInput total fuel spent in litres: ");
    scanf("%f",&fuel);
    printf("\nAverage consumption in km/l is %.3f",distance/fuel);
    return 0;
}