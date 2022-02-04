#include<stdio.h>
int main()
{
    int num,sum;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    sum=0;
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("\nThe sum of the digits is %d", sum);
    return(0);
}