#include<stdio.h>
int main()
{
    int a[100][100],i,j;
    int m,t=0;
    printf("\nEnter the order of matrix : ");
    scanf("%d",&m);
    
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        printf("Enter the element of (%d,%d) : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    

    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        if((i<j)&&(a[i][j]!=0))
        t=1;
        break;
    }
    if(t==1)
    printf("\nThe matrix is not a UTM");
    else
    printf("\nThe matrix is a UTM");

    return(0);
}