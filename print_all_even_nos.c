#include <stdio.h>
int main()
{
    int x=0;
    while((x>=0)&&(x<=50))
    {
        if(x%2==0)
        {
            printf("\n%d",x);
        }
        x=x+2;
    }
}