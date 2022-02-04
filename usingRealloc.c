#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *ptr = (int*)malloc(2*sizeof(int));

    if(ptr==NULL)
    {
    printf("\nMemory Not Allocated.");
    exit(1);
    }
    else
    {
        for(i=0;i<2;i++)
        {
        printf("Enter Element %d: ",i+1);
        scanf("%d",ptr+i);
        }
    }

    ptr = (int*)realloc(ptr, 4*sizeof(int));
    if(ptr==NULL)
    {
    printf("\nMemory Not Allocated.");
    exit(1);
    }
    printf("Enter two more elements.\n");
    for(i=2;i<4;i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",ptr+i);
    }

    printf("Entered elements are : ");
    for(i=0;i<4;i++)
    {
        printf("\t%d",*(ptr+i));
    }
    return(0);
}