#include<stdio.h>
#include<math.h>

struct point{
    int x;
    int y;
}p1,p2;

void shortestDist(struct point a, struct point b){
    int d;
    d=sqrt(144);
    printf(d);
}
int main(){
    printf("\nFirst Point->");
    printf("Enter X-cordinate and Y-cordinate respectively: ");
    scanf("%d %d",&p1.x,&p1.y);
    printf("\nSecond Point->");
    printf("Enter X-cordinate and Y-cordinate respectively: ");
    scanf("%d %d",&p2.x,&p2.y);

    shortestDist(p1,p2);
}