#include<stdio.h>
int main()
{
    int a[100][100],i,j;
    int m,sum=0;
    printf("\nEnter the order of the matrix: ");
    scanf("%d",&m);

    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        printf("Enter element in a(%d,%d) : ",i,j);
        scanf("%d",&a[i][j]);
    }

    printf("\nThe matrix is ");

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }

    for(j=0;j<m;j++)
    {   sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        printf("\nThe sum of elements of column %d is %d",j,sum);
    }
    return(0);
}