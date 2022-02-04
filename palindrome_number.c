#include<stdio.h>
int main()
{
    int i,rev=0,a;
    printf("\nEnter a number you want to reverse: ");
    scanf("%d", &i);
    a=i;
    while(i>0)
    {
        rev=(rev*10)+(i%10);
            i=i/10;
    }
    printf("\nThe revrsed number is : %d",rev);
    if(a==rev)
        printf("\nThe number is a palindrome number");
    else 
        printf("\nThe number is not a palindrome number");

    
    return(0);
}