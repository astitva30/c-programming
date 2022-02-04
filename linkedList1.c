//inserting a Node at the beginning of the linked list

#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x){
    struct Node* Temp = (Node *) malloc(sizeof(struct Node));
    Temp->data=x;
    Temp->next=NULL;
}
void Print(){
    struct node* temp = head;
    printf("List is:");
    while(temp!=NULL){
        printf("%d",Temp->data);
        temp = Temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL; // empty list
    int n,i,x;
    printf("How many numbers you want to enter in the list?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number you want to insert in the list: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;
}