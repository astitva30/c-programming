#include<stdio.h>
struct measurement {
    int feet;
    int inches;
} m1,m2,total;
void add(struct measurement, struct measurement);
int main(){
    printf("\nEnter first distance.");
    printf("\nEnter Feet: ");
    scanf("%d",&m1.feet);
    printf("Enter inches: ");
    scanf("%d",&m1.inches);

    printf("\nEnter second distance.");
    printf("\nEnter Feet: ");
    scanf("%d",&m2.feet);
    printf("Enter inches: ");
    scanf("%d",&m2.inches);

    add(m1,m2);
    return(0);
}
void add (struct measurement m1, struct measurement m2){
    total.feet=m1.feet+m2.feet;
    total.inches=m1.inches+m2.inches;
    if(total.inches>=12){
        total.feet++;
        total.inches=total.inches-12;
    }
    printf("\nThe sum of the given measurements is: %d feet %d inches .",total.feet,total.inches);
}