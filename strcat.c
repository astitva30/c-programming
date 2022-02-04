#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20], s2[20];
    printf("\nEnter your First Name: ");
    gets(s1);
    printf("\nEnter your Last Name: ");
    gets(s2);
    strcat(s1,s2);
    printf("\nYour Full Name is %s",s1);
    return(0);
    
}