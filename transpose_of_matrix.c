#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j;
    int m;


    printf("\nEnter the order of matrix you want to transpose : ");
    scanf("%d",&m);
    printf("\nInput the elements of the matrix -\n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        printf("Enter the element of (%d,%d) : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("\nThe entered matrix is -");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\nThe transpose of the given matrix is -");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[j][i]);
        }
    }
    return(0);
}