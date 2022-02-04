#include<stdio.h>
int main()
{
    char a[200],b[200];
    int i=0,word=1;

    printf("\nEnter your name: ");
    gets(a);

    while (a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    a[i]='\0';
    printf("\nThe copied string is %s .",b);

    return(0);
}
