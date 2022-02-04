#include <stdio.h>

int main()
{
    int num,i=1; 
    printf("\nEnter a number:");
    scanf("%d", &num);
    printnum:
    printf("\n%d",i);
    i++;
    if (i<=num)
    goto printnum;
    return(0);
}
