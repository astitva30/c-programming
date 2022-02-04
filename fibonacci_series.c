#include <stdio.h>
int main()
{
    int first=0;
    int second=1;
    int num,sum=0;
    printf("\nEnter number");
    scanf("%d",&num);
    
    while (sum<num)
    {
        printf("\n%d",sum);

        first=second;
        second=sum;
        sum=first+second;   
    }
    return(0);
}