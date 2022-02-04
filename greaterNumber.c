#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,Max,d;
    printf("\nenter two numbers : ");
    scanf("%d%d%d" , &a ,&b,&c);
    Max=(a>b)?a:b;
    d=(Max>c)?Max:c;
    printf("\nGREATER NUMBER IS =%d", d);
    return 0;
}