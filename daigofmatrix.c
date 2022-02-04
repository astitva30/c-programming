#include<stdio.h>
#include<string.h>
int main()
{
    int a[100][100],i,j;
    int m;

    printf("\nInput the order of the square matrix: ");
    scanf("%d",&m);

    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        printf("Element (%d,%d) : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n\nThe elements of leading daigonal are : ");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        if(i==j)
        printf("%d\t",a[i][j]);
    }
    printf("\n\nThe elements of off daigonal are : ");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        if((i+j)==(m-1))
        printf("%d\t",a[i][j]);
    }
    
    printf("\n");

    return(0);
}