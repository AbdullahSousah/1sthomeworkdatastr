#include <stdio.h>
#include <stdlib.h>
struct node{
int stdnum;
int age;
char *name;
struct node* next;
};

void insert(struct node **head, int stdnum, int age, char *name){
    struct node *current=malloc(sizeof(struct node));
    current->stdnum=stdnum;
    current->age=age;
    current->name=name;
    if(*head==NULL)
        *head=current;
    else{
        current->next=*head;
        *head=current;
    }
    int c=0;
    while(current->next!=NULL){
        c++;
        current=current->next;
    }
    current=*head;
    int f=c;
    while(f!=c){
        printf("%d   %s   %d   %d\n", f, current->name, current->age, current->stdnum);
    }
}
int main()
{
    struct node *head=NULL;
    int stdnum;
    int age;
    char name;
    int n;
    printf("how many students do you want to enter in the list:");
    scanf("%d", &n);
    for(n; n!=0; n--){
        printf("enter student number:");
        scanf("%d", &stdnum);
        printf("enter student name:");
        scanf("%s", &name);
        printf("enter student age:");
        scanf("%d", &age);
        insert(&head, stdnum, age, name);
    }




    return 0;
}
