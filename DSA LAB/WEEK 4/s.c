#include <stdio.h>
#include <stdlib.h>

typedef struct node_list *node;
struct node_list 
{
    int info;
    node next;
};

node display(node);
node check_empty(node);
node insertbeg(node, int);
node insert_pos(node, int, int);

node head = NULL;
int main()
{    
    int ch;
    int item, pos;
    do
    {
        printf("\nEnter your choice :\n1. Display the list\n2.Check for empty list\n3.Insert at beginning\n4.Insert at any pos 8.EXIT : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("LIST : ");
                head = display(head);
                break;

            case 2:
                head = check_empty(head);
                break;
            
            case 3:
                printf("\nEnter the element which it is to be inserted : ");
                scanf("%d", &item);
                head = insertbeg(head, item);
                break;

            case 4:                
                printf("\nEnter the element an the position at which it is to be inserted : ");
                scanf("%d%d", &item, &pos);
                head = insert_pos(head, pos, item);
                break;
            default:
                printf("\nInvalid choice");
        }
    } while (ch != 8);   

    return 0;

}

node display(node head)
{
    if(head == NULL)
    {
        printf("\nEmpty List");
        return head;
    }
    node ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    return head;
}

node check_empty(node head)
{
    if(head == NULL)
        printf("\nList is Empty");
    return head;
}

node insertbeg(node head, int item)
{
     struct node_list* newnode = (struct node_list*)malloc(sizeof(struct node_list));
     if(newnode == NULL)
     {
        printf("\nOVERFLOW");
        return head;
     }
     node ptr = head;
     newnode->info = item;
     newnode->next = head;
     head = newnode;
     return head;    
}

node insert_pos(node head, int pos, int item)
{
    struct node_list* newnode = (struct node_list*)malloc(sizeof(struct node_list));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW");
        return head;
    }
    newnode->info = item;
    newnode->next = NULL;
    node ptr = head;
    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    else
    {
        node temp;
        for(int i=1; i<=pos-1; i++)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        newnode->next = ptr;
        temp->next = newnode;
    }
    return head;    
}