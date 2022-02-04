#include<stdio.h>
int main()
{
    int arr1[100];
    int n,i,j,max;
    
    printf("\nHow mant elements you want to enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Element : ");
        scanf("%d",&arr1[i]);
    }

    printf("\nValues in ascending order are :");

    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        if(arr1[i]>arr1[j])
        {
            max=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=max;
        }
    }
    
    for(i=0;i<n;i++)
    printf("\n%d ",arr1[i]);

    return 0;
}