//Write a C program to create two link lists positive and negative from a Original linked list, so that positive linked list contains all positive elements and negative linked list contains negative elements. Positive and negative linked lists should use the node of existing original linked list without using global variable.*/


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
        if(p->data > 0)
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
        }
        p = p->next;
    }
    return head;
}

struct node *create_list_negative(struct node *head)
{
    struct node *temp;
    struct node *p;
    p = head;
    while(p != NULL)
    {
        if(p->data < 0)
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
        }
        p = p->next;
    }
    return head;
}

int main()
{
    struct node *head;
    head = NULL;
    head = create_list(head);
    print_list(head);
    head = create_list_positive(head);
    print_list(head);
    head = create_list_negative(head);
    print_list(head);
    return 0;
}
