#include<stdio.h>
int main()
{
    int num,thous,fiv_hund,hund,fif,twenty,ten,five,two,one;
    printf("\nInput the amount:");
    scanf("%d",&num);
    thous=num/2000;
    num=num-(thous*2000);
    fiv_hund=num/500;
    num=num-(fiv_hund*500);
    hund=num/100;
    num=num-(hund*100);
    fif=num/50;
    num=num-(fif*50);
    twenty=num/20;
    num=num-(twenty*20);
    ten=num/10;
    num=num-(ten*10);
    five=num/5;
    num=num-(five*5);
    two=num/2;
    num=num-(two*2);
    one=num/1;
    printf("\n%d Note(s) of 2000",thous);
    printf("\n%d Note(s) of 500",fiv_hund);
    printf("\n%d Note(s) of 100",hund);
    printf("\n%d Note(s) of 50",fif);
    printf("\n%d Note(s) of 20",twenty);
    printf("\n%d Note(s) of 10",ten);
    printf("\n%d Note(s) of 5",five);
    printf("\n%d Note(s) of 2",two);
    printf("\n%d Note(s) of 1",one);
}