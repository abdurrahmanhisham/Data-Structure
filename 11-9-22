#include <stdio.h>
#include <stdlib.h>
void createlist(int n);
void displaylist();
void InsertAtBeginning();
void InsertAtEnd();
void InsertAtPos(int);
void deleteAtBegining();
void deleteAtEnd();
void searching(int searchitem);
struct node
{
    int data;
    struct node *next;
}*head;

int main()
{
    int n,p,value;
    printf("Enter the number of input\n");
    scanf("%d", &n);
    createlist(n);
    displaylist();
    /*InsertAtBeginning();
    displaylist();
    InsertAtEnd();
    displaylist();
    printf("enter the position: ");
    scanf("%d",&p);
    InsertAtPos(p);
    displaylist();
    printf("After the Deletion: \n");
    deleteAtBegining();
    displaylist();
     printf("After the Deletion at the end: \n");
    */
    printf("enter the value you want to search\n");
    scanf("%d,&value");
    searching(value);
    deleteAtEnd();
     displaylist();
    return 0;
}
void createlist(int n)
{
    struct node *newnode, *current;
    int value, i;
    head = (struct node*) malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory is full");
    }
    else
    {
        printf("Enter first value of the list\n");
        scanf("%d", &value);
        head->data = value;
        head->next = NULL;
        current = head;
        for(i=1; i<n; i++)
        {
            newnode = (struct node*) malloc(sizeof(struct node));
            printf("Enter value-%d\n", i+1);
            scanf("%d", &value);
            newnode->data = value;
            newnode->next = NULL;
            current->next = newnode;
            current = newnode;
        }
    }
}
void InsertAtBeginning()
{
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at the beginning of the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void InsertAtEnd()
{
    struct node *newnode, *current;
    current = head;
    while(current->next != NULL)
    {
        current=current->next;
    }
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at the end of the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    current->next=newnode;
}
void InsertAtPos(int position)
{
    struct node *newnode,*current;
    current = head;
    int i;
    newnode =(struct node*) malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    for(i=1; i<position-1; i++)
    {
        current = current->next;
    }
    newnode->next = current->next;
    current->next = newnode;
}
void deleteAtBegining()
{
    struct node *current;
    current = head;
    head = head->next;
    free(current);
}
void deleteAtEnd()
{
    struct node *current,*prev;
    current = head;
    while(current->next != NULL)
    {
        prev = current;
        current=current->next;
    }
    prev->next = NULL;
    free(current);
}
void searching(int searchitem)
{
    struct node *current;
    current = head;
    int i=0;
    while(current!=NULL)
    {
        if(searchitem==current->data){
            printf("Search item is found");
            break;
        }
        else
        {
            current=current->next;
        }
    }
    if(current  == NULL){
        printf("search item is not found");
    }
}
void displaylist()
{
    struct node *current;
    current = head;
    printf("Data in the list are\n");
    while(current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

}
