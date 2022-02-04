#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d" , &num);
    if(num%2==0)
    goto even;
    else 
    goto odd;
    even:
    printf("\nThe number is even");
    return(0);
    odd:
    printf("\n The number is odd");
    return(0);
}
