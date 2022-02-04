#include <stdio.h>

int main()
{
    int num,i=0,a=0;
    printf("\nprint sum of first n natural numbers . So n=?");
    scanf("%d", &num);

    while(num>i)
    {
        printf("\n%d",num);
        a=a+num;
        num=num-1;
    }
    printf("\nAnd the sum is %d",a);
    return(0);
}