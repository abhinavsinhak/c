#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct node *insertleft(struct node *root, int value)
{
    root->left = createNode(value);
    return root->left;
}
struct node *insertright(struct node *root, int value)
{
    root->right = createNode(value);
    return root->right;
}
void inorder(struct node *root)
{
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

// int searchtree(struct node* root,int value){
//     while(root !=NULL){
//         if(value>root->data){
//             root = root->right;
//         }
//         else if(value<root->data){
//             root = root->left;
//         }
//         else{
//             return 1;
//         }
//     }
//     return 0;
// }

void main()
{
    int n;
    struct node *root;
    printf("enter the root value\n");
    scanf("%d", &n);
        root = createNode(n);
    insertleft(root, 15);
    insertright(root,10);
    insertleft(root->left,13);
    insertright(root->right,8);
    

}