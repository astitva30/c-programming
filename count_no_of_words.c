#include<stdio.h>
int main()
{
    char a[200];
    int i=0,word=1;

    printf("\nEnter your name: ");
    gets(a);

    while (a[i]!='\0')
    {
        if(a[i]==' ')
        word++;
        i++;
    }
    printf("\nThe total number of words in the sentence are %d .",word);

    return(0);
}