#include<stdio.h>

int main()
{
    int num,digits=0;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        digits++;
        num=num/10;
    
    }
    printf("\nThe entered number is a %d digit number",digits);
    return(0);

}