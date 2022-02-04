#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number between 0 and 100: ");
    scanf("%d",&num);
    if((num>=0)&&(num<=20))
    {
        printf("\nThe number lies between 0 and 20.");
    }
    else if((num>20)&&(num<=40))
    {
        printf("\nThe number lies between 20 and 40.");
    }
    else if((num>40)&&(num<=60))
    {
        printf("\nThe number lies between 40 and 60.");
    }
    else if((num>60)&&(num<=80))
    {
        printf("\nThe number lies between 60 and 80.");
    }
    else if((num>80)&&(num<=100))
    {
        printf("\nThe number lies between 80 and 100.");
    }
    else
    {
        printf("\nEnter a number which lies in the range.");
    }
}