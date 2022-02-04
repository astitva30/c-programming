#include<stdio.h>
int main()
{
    int p,q,r,s;
    printf("\nP:");
    scanf("%d",&p);
    printf("\nQ:");
    scanf("%d",&q);
    printf("\nR:");
    scanf("%d",&r);
    printf("\nS:");
    scanf("%d",&s);
    if((q>r) && (s>p) && ((r+s)>(p+q)) && (r>0) && (s>0) && (p%2==0))
    {
        printf("\nCORRECT VALUES\n");
    }
    else
    {
        printf("\nWRONG VALUES\n");
    }
    return 0;
}