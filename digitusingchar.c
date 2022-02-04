#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    printf("\nEnter a number:");
    scanf("%c",&a);
    if(((a>='0')&&(a<'9'))?1:0)
    printf("\nDigit");
    else
    printf("\nNot a digit");
    getch();
}