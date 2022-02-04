#include<stdio.h>
struct complexNumber {
    int realPart;
    int imagPart;
}cn1, cn2 , sum;
void add(struct complexNumber, struct complexNumber);
int main(){
    printf("\nEnter First complex number-");
    printf("\nReal part: ");
    scanf("%d",&cn1.realPart);
    printf("\nImaginary part: ");
    scanf("%d",&cn1.imagPart);

    printf("\nEnter Second complex number-");
    printf("\nReal part: ");
    scanf("%d",&cn2.realPart);
    printf("\nImaginary part: ");
    scanf("%d",&cn2.imagPart);
    
    add(cn1,cn2);
    return 0;
}
void add(struct complexNumber x1, struct complexNumber x2){
    sum.realPart=x1.realPart+x2.realPart;
    sum.imagPart=x1.imagPart+x2.imagPart;
    printf("\nThe sum of given two complex numbers is %d + %di",sum.realPart,sum.imagPart);
}