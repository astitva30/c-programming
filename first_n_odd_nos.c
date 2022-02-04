#include <stdio.h>

int main()
{
    int num,i=0,a;
    printf("\nprint first __________ odd numbers?");
    scanf("%d", &num);
    a=(num*2)-1;

    while(a>i)
    {
        printf("\n%d",a);
        a=a-2;
    }
    return(0);
}