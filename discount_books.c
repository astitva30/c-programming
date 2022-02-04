#include<stdio.h>
int main()
{
    int b;
    printf("Enter the number of books you want to purchase: ");
    scanf("%d",&b);
    if(b>=100)
    printf("\nYou will get 15 percent discount!");
    else
    printf("\nYou will get 10 percent discount!");
    return(0);
}