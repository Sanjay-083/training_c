#include <stdio.h>
#include <stdlib.h>
struct Tree
{
    int data;
    struct Tree *left, *right;
};
struct Tree *root = NULL;
void insertNode(int val)
{
    struct Tree *createNode = (struct Tree *)malloc(sizeof(struct Tree));
    createNode->data = val;
    createNode->left = NULL;
    createNode->right = NULL;

    if (root == NULL)
    {
        root = createNode;
    }
    else
    {
        struct Tree *temp = root;
        while (1)
        {
            if (val < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = createNode;
                    return;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            { 
                if (temp->right == NULL)
                {
                    temp->right = createNode;
                    return;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}

void inorder(struct Tree *temp)
{
    if (temp == NULL)
    {
        return;
    }
    inorder(temp->left);
    printf("%d\t", temp->data); 
    inorder(temp->right);
}

void preorder(struct Tree *temp)
{
    if (temp == NULL)
    {
        return;
    }
    printf("%d\t", temp->data); 
    preorder(temp->left);
    preorder(temp->right);
}

int main()
{
    insertNode(50);
    insertNode(25);
    insertNode(20);
    insertNode(10);
    insertNode(5);
    insertNode(75); 
    insertNode(60);
    insertNode(80);
    inorder(root); 
    preorder(root);
    return 0;
}