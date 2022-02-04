#include<stdio.h>

struct employee{
    int id;
    char name[30];
    float salary;
};
void display (struct employee *ptr)
{
    printf("\nID : %d",ptr->id);
    printf("\nName : %s",ptr->name);
    printf("\nSalary : %f",ptr->salary);
}
int main()
{
    struct employee astitva;
    printf("\nEnter your id: ");
    scanf("%d",&astitva.id);
    printf("Enter your name: ");
    scanf("%s",&astitva.name);
    printf("Enter your salary: ");
    scanf("%f",&astitva.salary);

    display(&astitva);
    return(0);
}
