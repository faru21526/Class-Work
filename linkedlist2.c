#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};
struct node *head=NULL;
void insertAtBegining(int num){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->value=num;
    newNode->next=head;
    head=newNode;

}

void TraverseLinkedList(){
struct node *temp=head;
printf("\n\nList elements are-\n");
while(temp!=NULL){
    printf("%d ",temp->value);
    temp=temp->next;
}
printf("\n");
}

void insertAtEnd(int num){
struct node *newNode=malloc(sizeof(struct node));
   newNode->value=num;
   newNode->next=NULL;
   if(head==NULL)
{
    head=newNode;
}
else{
    struct node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
printf("\n");
}
int main(){
insertAtBegining(4);
insertAtBegining(5);
insertAtBegining(6);
TraverseLinkedList();
insertAtEnd(7);
insertAtEnd(8);
insertAtEnd(9);
TraverseLinkedList();
return 0;
}

