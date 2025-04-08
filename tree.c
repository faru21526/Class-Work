#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
int data;
struct node *left;
struct node *right;
};

struct node *createNode(int n){
struct node *newNode=malloc(sizeof(struct node));
newNode->data=n;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node *insert(struct node *root,int value){
if(root==NULL){
    return createNode(value);
}
else if(root->data<value){
    root->right=insert(root->right,value);
}
else{
    root->left=insert(root->left,value);
}
return root;
}

void traverseInorder(struct node *root){
if(root==NULL)
    return;
traverseInorder(root->left);
printf(" %d ",root->data);
traverseInorder(root->right);
}
void traversePreorder(struct node *root){
if(root==NULL)
    return;
    printf(" %d ",root->data);
traversePreorder(root->left);
traversePreorder(root->right);
}
void traversePostorder(struct node *root){
if(root==NULL)
    return;
traversePostorder(root->left);
traversePostorder(root->right);
printf(" %d ",root->data);
}
struct node *minValueNode(struct node *root){
    struct node *tmp=root;
    while(tmp->left!=NULL)
          tmp=tmp->left;
          return tmp;
}
struct node *deleteNode(struct node *root,int key){
    if(root==NULL)
        return root;
    if(key<root->data)
        root->left=deleteNode(root->left,key);
    else if(key>root->data)
        root->right=deleteNode(root->right,key);
        else{
            if(root->left==NULL){
                struct node *temp=root->right;
                free(root);
                return temp;
            } else if(root->right==NULL){
            struct node *temp=root->left;
                free(root);
                return temp;
            }

        struct node *temp=minValueNode(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
        }
        return root;
}
int main (){
struct node *root=NULL;
root=insert(root,40);
root=insert(root,30);
root=insert(root,20);
root=insert(root,70);
root=insert(root,80);

printf("\nInorder traversal:");
traverseInorder(root);
printf("\nPreorder traversal:");
traversePreorder(root);
printf("\nPostrder traversal:");
traversePostorder(root);
                  printf("\nafter deleting:70\n");
                  root=deleteNode(root,70);
printf("\nInorder traversal:");
traverseInorder(root);
printf("\nPreorder traversal:");
traversePreorder(root);
printf("\nPostrder traversal:");
traversePostorder(root);

return 0;
}















