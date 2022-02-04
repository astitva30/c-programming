#include<stdio.h>
#include<math.h>

int factorial(int a)                        // ye factorial function factoiral ki value calculate karke dega 
{
    int i,denom=1;
    for(i=1;i<=a;i++)
    {
        denom = denom*i;
    }
    return denom;                             // return denom matlab denom nikalke neeche main body wale donom me assign hojayega
}

int main()
{
    int x,i,n,denom;
    float sum =1,numer;                       
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter number of times: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        denom = factorial(2*i);             //denom = denomiator ki value niklegi jab apan factorial function ko call karenge.
        numer = pow(-1,i) * pow(x,2*i);
        sum = sum + ((numer)/(denom));
    }
    printf("series= %.2f",sum);
    return(0);
}