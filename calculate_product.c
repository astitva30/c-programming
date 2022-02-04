#include <stdio.h>

int main() {

    float weight_of_product_1;
    float weight_of_product_2;
    int quantity_of_product_1;
    int quantity_of_product_2;
    printf("Enter the weight of first product: ");
    scanf("%f", &weight_of_product_1);
    printf("Enter the quantity of first product: ");
    scanf("%d", &quantity_of_product_1);

    printf("Enter the weight of second product: ");
    scanf("%f", &weight_of_product_2);
    printf("Enter the quantity of first product: ");
    scanf("%d", &quantity_of_product_2);

    printf("Average value : %f",
    ((weight_of_product_1*quantity_of_product_1)+(weight_of_product_2*quantity_of_product_2))/(quantity_of_product_1+quantity_of_product_2));

    return(0);

 }