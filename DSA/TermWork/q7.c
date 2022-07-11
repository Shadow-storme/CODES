//Write a C program to insert a node in a circular doubly link list from left to right so that nodes of that circular doubly link list will be in ascending order of data without using global variable.*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *create_list(struct node *head)
{
    struct node *temp;
    int data;
    printf("Enter the data : ");
    scanf("%d",&data);
    while(data != -1)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            struct node *p;
            p = head;
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
            temp->prev = p;
        }
        printf("Enter the data : ");
        scanf("%d",&data);
    }
    return head;
}

struct node *create_list_positive(struct node *head)
{
    struct node *temp;
    struct node *p;
    p = head;
    while(p != NULL)
    {
        if(p->data < 0)
        {
            temp = p->next;
            p->next = p->prev;
            p->prev = temp;
        }
        p = p->next;
    }
    return head;
}   

void print_list(struct node *head)
{
    struct node *p;
    p = head;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct node *head;
    head = NULL;
    head = create_list(head);
    head = create_list_positive(head);
    print_list(head);
    return 0;
}
