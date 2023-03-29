#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}
struct node* createnode(int data){
    struct node* newnode = (struct node* )malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
}
struct node* insert(struct node* root,int data){
    if(root==NULL){
        return root
    }
}