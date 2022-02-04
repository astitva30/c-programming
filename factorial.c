#include <stdio.h>
int main()
{
    int num,factorial=1;
    printf("\nEnter the number you want factorial of :");
    scanf("%d", &num);
    while(num>1)
    {
        factorial=factorial*num;
        num=num-1;
    }
    printf("\nThe factorial value of this number is %d",factorial);
    return(0);
}