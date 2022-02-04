#include<stdio.h>
struct charset {
    char s;
    int i;
};
void keyValue(char* character, int* integer){
    printf("Enter a character and an integer respectively:");
    scanf("%c %d",character,integer);
}
int main(){
    struct charset cs;
    keyValue(&cs.s,&cs.i);
    printf("%c %d",cs.s,cs.i);
    return 0;
}