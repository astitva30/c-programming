#include<stdio.h>
void add(int*p,int*q){
    int c;
    c=*p+*q;
    printf("\nSum of given numbers= %d",c);
}
int main()
{
    int a,b,*p,*q;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    add(p,q);
    return(0);
}