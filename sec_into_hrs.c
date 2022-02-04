#include<stdio.h>
int main()
{
    int sec,hours,min;
    printf("\nEnter number of seconds: ");
    scanf("%d",&sec);
    hours=sec/3600;
    sec=sec-(hours*3600);
    min=sec/60;
    sec=sec-(min*60);
    printf("\nH:M:S - %d:%d:%d", hours,min,sec);
    return(0);
}