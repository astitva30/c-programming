#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum=0;
    printf("\nEnter five numbers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a%2==1)
    {
        sum=sum+a;
    }
    if(b%2==1)
    {
        sum=sum+b;
    }
    if(c%2==1)
    {
        sum=sum+c;
    }
    if(d%2==1)
    {
        sum=sum+d;
    }
    if(e%2==1)
    {
        sum=sum+e;
    }
    printf("\nThe sum of entered odd numbers is %d",sum);
}