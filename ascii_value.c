#include<stdio.h>
int main()
{
    int sum=0;
    char name[20];
    int i=0;
    printf("\nEnter your name :");
    scanf("%s",name);
    while(name[i]!=0)
    {
        printf("\nThe ASCII value of %c is %d",name[i],name[i]);
        sum=sum+name[i];
        i++;
    }
    printf("\nThe sum of all ASCII values of all characters is %d",sum);
}