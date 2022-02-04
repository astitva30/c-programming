#include<stdio.h>
void display(int);
void even(int);
int main(){
    int Arr[20],n,i;
    printf("How many numbers you want in array: ");
    scanf("%d",&n);
    printf("Enter %d values in array.\n",n);

    for(i=0;i<n;i++){
        printf("Enter elemnt %d:",i);
        scanf("%d",&Arr[i]);
    }

    printf("\nElements are==>\n");
    for(i=0;i<n;i++){
        display(Arr[i]);
    }
    printf("\neven nos\n");
    for(i=0;i<n;i++){
        even(Arr[i]);
    }

    return 0;
}

void display(int x){
    printf("\t%d",x);
}

void even(int x){
    if(x%2==0){
        printf("\t%d",x);
    }
}