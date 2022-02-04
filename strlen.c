#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("\nEnter a string: ");
    gets(str);
    printf("\nThe length of the string is %d",strlen(str));
    return(0);
}