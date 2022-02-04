#include <stdio.h>

int main()
{
    int num,i=0,a;
    printf("\nprint first __________ even numbers?");
    scanf("%d", &num);
    a=num*2;

    while(a>i)
    {
        printf("\n%d",a);
        a=a-2;
    }
    return(0);
}