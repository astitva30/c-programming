#include<stdio.h>
struct student {
    int roll;
    char name[25];
    float per;
}s1,s2;

int main(){
    printf("Enter your roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter your name: ");
    scanf("%s",&s1.name);
    printf("Enter your percentage: ");
    scanf("%f",&s1.per);

    printf("Roll no.\t Name \t Percentage\n");
    printf("%d \t %s \t %f",s1.roll,s1.name,s1.per);

    return(0);
}