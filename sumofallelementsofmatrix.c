#include<stdio.h>
int main()
{
    int a[100][100],i,j;
    int m,n;
    int sum=0;

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

    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
       sum=sum+a[i][j];
    }

    printf("\nThe sum of all elements is: %d",sum);

    return(0);
}