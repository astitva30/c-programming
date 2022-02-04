#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,dis;
    printf("\nEnter the values of a,b,c in a quadratic eqn");
    printf("\na: ");
    scanf("%d",&a);
    printf("\nb: ");
    scanf("%d",&b);
    printf("\nc: ");
    scanf("%d",&c);
    dis=(b*b)-(4*a*c);
    if((dis>0)&&(a!=0))
    {
        x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf("\n Root 1 = %f",x1);
        printf("\n Root 2 = %f",x2);
    }
    else
    {
        printf("It is impossible to find real roots");
    }
    return(0);
}