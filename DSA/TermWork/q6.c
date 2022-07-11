//Write a C program to   create a linked list P, then write a ‘C’ function named split to create two   linked lists Q & R from P So that Q contains all elements in odd positions of P and R contains the remaining elements. Finally print both linked lists i.e., Q and R.*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
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
        }
        printf("Enter the data : ");
        scanf("%d",&data);
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

struct node *create_list_positive(struct node *head)
{
    struct node *temp;
    struct node *p;
    p = head;
    while(p != NULL)
    {
        if(p->data % 2 == 0)
        {
            p = p->next;
        }
        else
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = p->data;
            temp->next = NULL;
            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                struct node *q;
                q = head;
                while(q->next != NULL)
                {
                    q = q->next;
                }
                q->next = temp;
            }
            p = p->next;
        }
    }
    return head;
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





