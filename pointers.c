#include<stdio.h>
// int main()
// {
//     int x=5;
//     int *p=&x;
//     *p=6;
//     int **q=&p;
//     printf("\n address of x is %d",p);
//     printf("\n value at x is %d",*p);
//     printf("\n address of p is %d",q);
//     printf("\n value at p is %d",**q);
//     return(0);
// }

void print(char* C)
{
    int i = 0;
    while (C[i]!='\0')
    {
        printf("%c",C[i]);
        i++;
    }
}

int main()
{
    char C[20]="HELL";
    print(C);
}