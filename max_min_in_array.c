#include<stdio.h>

int main()
{
    int arr[100];
    int i,max,min,n;

    printf("\n===========================");
    printf("\nEnter the number of elements you want to enter: ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }

    max=arr[0];

    for (i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    min=arr[0];

    for (i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    printf("\n\n");
    printf("\nThe maximum number is : %d ",max);
    printf("\nThe minimum number is : %d ",min);
}