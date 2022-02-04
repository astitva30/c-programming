#include<stdio.h>
int main()
{
    int a[100][100],i,j;
    int m,n;
    int num,count=0;

    printf("\nInput the number of rows: ");
    scanf("%d",&m);

    printf("\nInput the number of columns: ");
    scanf("%d",&n);

    printf("\n");

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        printf("Enter Element (%d,%d): ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        printf("\n");
        
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n");

    printf("\nEnter the number you want to search: ");
    scanf("%d",&num);

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        if(a[i][j]==num)
        {
            printf("\nThe address of the element is (%d,%d)",i+1,j+1);
            count++;
        }
    }

    if(count==0)
    printf("\nElement not found");

    printf("\n");

    return(0);
}