#include<stdio.h>
int main()
{
    int n,i,arr[10],*p=&arr[0];
    printf("\nEnter the number of elements you want in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("\nElement %d: %d",i,*(arr+i));
    }
    return(0);
}