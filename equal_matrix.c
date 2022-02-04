#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j;
    int m,t=0;
    printf("\nEnter the order of matrix : ");
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

    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        if(a[i][j]==b[i][j])
        t++;
    }

    if(t==9)
    printf("\nThe entered matrices are equal.");
    else
    printf("\nThe entered matrices are not equal.");

    return(0);
}    