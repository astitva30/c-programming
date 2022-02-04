#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("\nEnter a number: ");
        scanf("%d",&a[i]);
    }
    printf("\nNumber stored in array are");
    for(i=0;i<10;i++)
    {
    printf(" %d",a[i]);
    sum=sum+a[i];
    }
    printf("\nThe number stored in array in reverse order are");
    for(i=9;i>=0;i--)
    {
    printf(" %d",a[i]);
    }
    printf("\nThe sum of elements stored in array is %d",sum);
    return(0);
}