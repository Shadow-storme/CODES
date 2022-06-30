#include<stdio.h>
#include<stdlib.h>

typedef struct treetype
{
    struct treetype *left;
    int data;
    struct treetype *right;
}tree;

tree * memory()
{
    tree *p=(tree*)malloc(sizeof(tree));
    p->left=NULL;
    p->right=NULL;
    return p;
}
tree *create(tree *root,int num)
{
    tree *p;
    if(root==NULL)
    {
        p=memory();
        p->data=num;
        root=p;
        return (root);
    }
    else if(root->data>num)
    {
        root->left=create(root->left,num);
    }
    else if(root->data<num)
    {
        root->right=create(root->right,num);
    }
    else
    {
        printf("Invalid data");
    }
    return root;
}
void pre_order(tree *root)
{
    if(root!=NULL)
    {
        printf("")
    }
}