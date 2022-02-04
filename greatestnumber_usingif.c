#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter first number: ");
    scanf("%d",&a);
    printf("\nEnter second number: ");
    scanf("%d",&b);
    printf("\nEnter third number: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\nFirst number is the greatest.");
        }
        else{
            printf("\nThird number is the greatest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("\nSecond number is the greatest");
        }
        else
        {
            printf("\nThird nmber is the greatest");
        }
    }
    return(0);
}