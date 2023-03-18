#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
}
struct node* createNode(int value){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertleft(struct node* root,int value){
    root->left = createNode(value);
    return root->left;
}
struct node* insertright(struct node* root,int value){
    root->right = createNode(value);
    return root->right;
}
void inorder(struct node* root){
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void preorder(struct node* root){
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int search(struct node* root,int value){
    struct node* current = root;
   
   if(current ==NULL){
       return 0;
   }
   if(current->data ==value){
     return 1;
   }
    int r1 = search(root->left,value);
    if(r1){
        return 1;
    }
    int r2 = search(root->right,value);
    if(r2){
        return 1;
    }
    return 0;
}
void delete(struct node* root,int value){
    
}