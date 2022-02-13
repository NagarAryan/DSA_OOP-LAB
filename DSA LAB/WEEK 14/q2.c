#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int key;
    struct Node *left, *right;
};

struct Node *newNode(char k)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = k;
    node->right = node->left = NULL;
    return node;
}

bool isFull(struct Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    if ((root->left) && (root->right))
        return (isFull(root->left) && isFull(root->right));

    return false;
}

void insert(struct Node *root, struct Node *new_node)
{
    if (new_node->key < root->key)
    {
        if (root->left == NULL)
            root->left = new_node;
        else
            insert(root->left, new_node);
    }

    if (new_node->key > root->key)
    {
        if (root->right == NULL)
            root->right = new_node;
        else
            insert(root->right, new_node);
    }
}

int main()
{
    struct Node *root = NULL;
    int choice = 0;
    do
    {
        int n;
        printf("Enter the element : \n");
        scanf("%d", &n);
        if (root == NULL)
        {
            root = newNode(n);
        }
        else
        {
            insert(root, newNode(n));
        }
        printf("press 1 to continue entering the data in tree 0 to stop entering data \n");
        scanf("%d", &choice);
    } while (choice != 0);

    if (isFull(root))
        printf("The Binary tree is full\n");
    else
        printf("The Binary tree is not full\n");

    return (0);
}