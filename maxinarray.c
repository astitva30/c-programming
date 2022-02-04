#include<stdio.h>
int main()
{
    int arr[100],i,max,min,n;
    printf("\nEnter the number of elements you want to enter in an array: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nEnter the number: ");
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
    printf("\nThe value of maximum number is %d",max);
    min=arr[0];
    for(i=0;i<n;i++)
    if(arr[i]<min)
    min=arr[i];
    printf("\nThe value of minimum number is %d",min);
    return(0);
}