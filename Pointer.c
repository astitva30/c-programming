#include<stdio.h>
int main(){
    int a,*p;
    a=10;
    p=&a;
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",p);
    return(0);
}