#include <stdio.h>

int main() {

    int num1;
    int num2;

    printf("ENTER THE FIRST INTEGER: ");
    scanf("%d", &num1);
    printf("ENTER THE SECOND INTEGER: ");
    scanf("%d", &num2);

    printf("\nFIRST INTEGER IS: %d", num1);
    printf("\nSECOND INTEGER IS: %d", num2);
    printf("\nAND THEIR product IS: %d", num1*num2);

    return(0);

 }