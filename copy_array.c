#include<stdio.h>
int main()
{
    int arr1[100],arr2[100];
    int i,n;
    printf("\nInput number of elements to be stored in an array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
        arr2[i]=arr1[i];
    printf("\nThe elements of array 1 are ");
    for(i=0;i<n;i++)
    {
        printf("  %d",arr1[i]);
    }
    printf("\nThe elements of array 2 are ");
    for(i=0;i<n;i++)
    {
        printf("  %d",arr2[i]);
    }
    return(0);
}