#include<stdio.h>
struct point {
    int x;
    int y;
}p1,p2;

struct point edit(struct point p){
    p.x++;
    p.y=p.y+5;
    return p;
}

void print(struct point p){
    printf("\n%d , %d",p.x,p.y);
}

int main(){
    struct point p1 = {12,13};
    struct point p2 = {10,11};
    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);
    return 0;
}