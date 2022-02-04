#include <stdio.h>
int main()
{
    int num,ones,tens,hun;
    printf("\nEnter a three digit number");
    scanf("%d",&num);
    ones=num%10;
    tens=(num%100)/10;
    hun=(num%1000)/100;
    printf("\nOnes place is filled by %d",ones);
    printf("\ntens place is filled by %d",tens);
    printf("\nhun place is filled by %d",hun);
    return(0);
}