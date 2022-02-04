#include<stdio.h>
void swap(int a, int b){
    
}
int main(){
    int n, arr[10];
    printf("How many numbers you want to sort: ");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return(0);
}