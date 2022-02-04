#include <stdio.h>

int main()
{
    int num,i=0;
    printf("\nBack counting starting from where?");
    scanf("%d", &num);

    while(num>i)
    {
        printf("\n%d",num);
        num=num-1;
    }
    return(0);
}