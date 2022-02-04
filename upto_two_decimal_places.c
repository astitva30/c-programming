#include<stdio.h>
int main()
{
    int ID;
    float hours,salary,total_pay;
    printf("\nEnter the employee ID: ");
    scanf("%10d",&ID);
    printf("\nInput the working hours: ");
    scanf("%f",&hours);
    printf("\nSalary amount/hour: ");
    scanf("%f",&salary);
    total_pay=hours*salary;
    printf("\nEmployee ID = %d",ID);
    printf("\nSalary: %.2f",total_pay);
    return(0);
}