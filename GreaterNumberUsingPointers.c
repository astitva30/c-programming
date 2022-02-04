#include<stdio.h>
void greaterNum(int*,int*);
int main()
{
    int a,b,*p,*q;
    p = &a;
    q = &b;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    greaterNum(p,q);
    return(0);
}
void greaterNum(int *p,int *q)
{
    if(*p>*q)
    printf("\nFirst Number is Greater.");
    else
    printf("\nSecond Number is Greater.");
}