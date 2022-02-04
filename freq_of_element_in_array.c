#include<stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int i,j,num,n,k=0;
    printf("-----------------------------------------------------------------");
    printf("\nHow many elements you want to enter : ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++)
    {
        arr1[i]=arr2[i];
        arr3[i]=0;
    }

    for(i=0;i<num;i++)
    {
        k=0;
        for(j=0;j<num;j++)
        {
            if(arr1[i]==arr2[j])
                k++;
        }
        printf("\nThe frequency of %d is %d",arr[i],k);
    }
    printf("\n-----------------------------------------------------------------");
    return(0);
}