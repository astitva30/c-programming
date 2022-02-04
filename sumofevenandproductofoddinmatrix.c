#include<stdio.h>
int main()
{
    int a[100][100],i,j;
    int m,n;
    int evensum=0,productodd=1;
    int even=0,odd=0;

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
        if(a[i][j]%2==0)
        {
            even++;
            evensum=evensum+a[i][j];
        }
        else
        {
            odd++;
            productodd=productodd*a[i][j];
        }
    }

    printf("\nNumber of even elements: %d",even);
    printf("\nSum of even elements: %d",evensum);

    printf("\nNumber of odd elements: %d",odd);
    if(odd==0)
    printf("\nProduct of odd numbers: There are no odd numbers.");
    else
    printf("\nProduct of odd numbers: %d",productodd);

    printf("\n");

    return (0);
}