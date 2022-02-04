#include<stdio.h>
int main()
{
    char a[200];
    int i=0,vowel=0,cons=0;

    printf("\nEnter your name: ");
    gets(a);

    while (a[i]!='\0')
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || 
            a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
            vowel++;
            else
            cons++;
        }
        i++;
    }
    printf("\nNumber of vowels are %d \nNumber of consonents are %d",vowel,cons);

    return(0);
}