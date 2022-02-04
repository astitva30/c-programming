#include<stdio.h>
int main()
{
    int i,number[5],a=0,b=0;
    printf("\nEnter first number: ");
    scanf("%d",&number[0]);
    printf("\nEnter second number: ");
    scanf("%d",&number[1]);
    printf("\nEnter third number: ");
    scanf("%d",&number[2]);
    printf("\nEnter fourth number: ");
    scanf("%d",&number[3]);
    printf("\nEnter fifth number: ");
    scanf("%d",&number[4]);

    for(i=0;i<5;i++)
    {
        if(number[i]>a)
        {
            a=number[i];
            if(number[i]>a)
            {
                b=b+1;
            }
        }
    }
    printf("\nThe greatest number is %d located at %dth position",a,i);
}