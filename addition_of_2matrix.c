#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j;
    int m;
    int c[100][100];
    printf("\nEnter the order of matrices you want to add");
    scanf("%d",&m);
    printf("\nMatrix 1\n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        printf("Enter the element of (%d,%d) : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("\nMatrix 2]=\n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        printf("Enter the element of (%d,%d) : ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    printf("\nThe sum of entered two matrices are :");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[i][j]+b[i][j]);
        }
    }
    return(0);
}