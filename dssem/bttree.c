#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

struct node *delete(struct node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }

    if (data < root->data)
    {
        root->left = delete (root->left, data);
    }
    else if (data > root->data)
    {
        root->right = delete (root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL || root->right == NULL)
        {
            struct node *temp;

            if (root->left == NULL)
            {
                temp = root->right;
            }
            else
            {
                temp = root->left;
            }

            free(root);
            return temp;
        }
        else
        {
            struct node *temp = root->right;

            while (temp && temp->left != NULL)
            {
                temp = temp->left;
            }

            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }

    return root;
}

struct node *search(struct node *root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }

    if (root->data < data)
    {
        return search(root->right, data);
    }

    return search(root->left, data);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root = NULL;

    // Insert nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Print inoder traversal of the BST
    inorder(root);

    // Delete nodes
    delete (root, 20);

    // Print inoder traversal of the BST
    printf("\nAfter deleting 20\n");
    inorder(root);

    delete (root, 30);

    // Print inoder traversal of the BST
    printf("\nAfter deleting 30\n");
    inorder(root);

    delete (root, 50);

    // Print inoder traversal of the BST
    printf("\nAfter deleting 50\n");
    inorder(root);

    // Search for a node
    struct node *foundNode = search(root, 60);

    if (foundNode != NULL)
    {
        printf("\n%d found in the tree\n", foundNode->data);
    }
    else
    {
        printf("\n%d not found in the tree\n", foundNode);
    }

    foundNode = search(root, 100);

    if (foundNode != NULL)
    {
        printf("\n%d found in the tree\n", foundNode->data);
    }
    else
    {
        printf("\n%d not found in the tree\n", foundNode);
    }

    return 0;
}