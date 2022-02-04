#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("\nEnter a number");
    scanf("%d",&num);
    i=num;

    while(num>0)
    {
        sum=sum+(num%10)*(num%10)*(num%10);
        num=num/10;
    }
    if(i==sum)
        printf("\nThe number is a armstrong number");
    else
        printf("\nThe number is not a armstrong number");
    return(0);    
}