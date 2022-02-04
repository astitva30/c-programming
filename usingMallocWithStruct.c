#include<stdio.h>
#include<stdlib.h>
struct person {
    int name[20];
    int age;
};
int main()
{
    struct person *ptr;
    int n,i;

    printf("\nEnter the number of entries: ");
    scanf("%d",&n);
    //for allocating memory according to the need
    ptr= (struct person*) malloc(n*sizeof(struct person));

    for(i=0;i<n;i++)
    {
        printf("\nEnter the Name and Age respectively: ");
        scanf("%s %d",&(ptr+i)->name,&(ptr+i)->age);
    }
    for(i=0;i<n;i++)
    {
        printf("\nName %s\t Age:  %d",(ptr+i)->name,(ptr+i)->age);
    }
    return (0);
}