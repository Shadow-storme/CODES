#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct node))
    if(t==NULL)
    printf("Stack is full\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop()
{
    struct Node *t;
    char x=1;

    if(top==NULL)
    printf("Stack is empty");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display()
{
    struct Node *p;
    p=top;
    while(top!=NULL)
    {
        printf("%d",p->data);
    }
    printf("\n");
}