#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,t;
    int m;
    int c[100][100];

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


    printf("\nMatrix-1 : ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\nMatrix-2 : ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("\t%d",b[i][j]);
        }
    }


    printf("\nThe product of given matrices is : ");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(t=0;t<m;t++)
            {
                c[i][j]=c[i][j]+(a[i][t]*b[t][j]);
            }
            printf("\t%d",c[i][j]);
        }
    }    
    return(0);
}