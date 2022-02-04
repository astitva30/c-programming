#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d,Max;
    printf("\nenter three numbers : ");
    scanf("%d%d%d" , &a ,&b,&c);
    d=(a>b)?a:b;
    Max=(d>c)?d:c;
    printf("\nGREATEST NUMBER IS =%d", Max);
    return 0;
}