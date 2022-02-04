#include <stdio.h>
int main()
{
    int no_of_days , years , weeks , days;

    no_of_days=4000;

    years=no_of_days/365;
    weeks=(no_of_days-(years*365))/7;
    days=no_of_days-((years*365)+(weeks*7));


    printf("Years: %d\n" , years);
    printf("Weeks: %d\n" , weeks);
    printf("Days: %d\n" , days);

    return(0);
}