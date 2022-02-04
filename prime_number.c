#include<stdio.h>
int main()
{
    int num;
    int n=0,i;
    printf("----------------------------------------------------------------");
    printf("\nEnter a number to check weather it is a prime number or not : ");
    scanf("%d",&num);
    
    for (i=1;i<=num;i++)
        if(num%i==0)
            n++;

    if(n==2)
        printf("\n%d has %d factors. So %d is a PRIME NUMBER !",num,n,num);
    else
        printf("\n%d has %d factors. So %d is NOT a PRIME NUMBER !",num,n,num);

    printf("\n-----------------------------");
    return(0);            
}