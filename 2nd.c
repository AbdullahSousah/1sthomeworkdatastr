#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next
};

struct node* createnode(int x){
struct node *newnode=malloc(sizeof(struct  node));
if(newnode==NULL){
    printf("memory allocation failed");
    exit(1);
}
newnode->data=x;
newnode->next=NULL;
return newnode;
}
void insert(struct node **head, int x){
struct node *newnode=createnode(x);
newnode->next=*head;
*head=newnode;

}

int main()
{
    struct node *head=NULL;
    int x,a;
    for(a=0; a<100; a++){
        x=rand() %1000;
        insert(&head, x);
    }
    int c=0;
    struct node *current=head;
    int num[100];
    while(current->next!=NULL){
        num[c]=current->data;
        current=current->next;
        c++;
    }
    int f=c;
    int q;
    for(c=0; c<100; c++){
        for(f=0; f<100; f++){
            if(c<f){
                q=c;
                c=f;
                f=q;
            }
        }
    }
    for(c=0; c<100; c++){
        printf("%d\n", num[c]);
    }
    return 0;
}

