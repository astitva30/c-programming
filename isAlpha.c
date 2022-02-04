#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\nEnter Something: ");
    scanf("\n%c",&ch);
    if(isalpha(ch))
        printf("\nThis is an Alphabet");
    else
        printf("\nThis is not an alphabet");
    
    if(isdigit(ch))
        printf("\nThis is a Digit");
    else
        printf("\nThis is not a Digit");

    if(isalnum(ch))
        printf("\nThe character is either an Alphabet or a Digit");
    else
        printf("\nThe character is neither an Alphabet nor a Digit");
    
    if(isspace(ch))
        printf("\nThe character is a Space");
    else
        printf("\nThe character is not a Space");
    
    if(islower(ch))
        printf("\nThe character is a Lower case Alphabet");
    else
        printf("\nThe character is not a Lower case Alphabet");
    
    if(isupper(ch))
        printf("\nThe character is an Upper case Alphabet");
    else
        printf("\nThe character is not an Upper case Alphabet");

    printf("\nThe character to Lower case is= %c",tolower(ch));
    printf("\nThe character to Upper case is= %c",toupper(ch));

    return(0);

}