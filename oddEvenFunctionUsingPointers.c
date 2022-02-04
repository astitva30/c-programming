#include<stdio.h>
void oddEve(int* p){
    if(*p%2==0)
    printf("\nThis number is EVEN");
    else
    printf("\nThis number is ODD");
}
int main(){
    int a,*p;
    p=&a;
    printf("\nEnter a number: ");
    scanf("%d",&(*p));
    
    oddEve(p);
    return(0);
}