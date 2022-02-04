#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the number of entries you want: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("No memory allocated.");
    }
    else{
        for(i=0;i<n;i++)
        {
            printf("Enter element %d: ",i+1);
            scanf("%d",ptr+i);
        }
    }
    printf("\nThe entered elements are: ");
    for(i=0;i<n;i++)
        {
            printf("\t%d",*(ptr+i));
        }

    return(0);
}