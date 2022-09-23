//InsertAtBeginning

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;

void createlist(int n);
void displaylist();
void InsertAtBeginning();

int main()
{
    int n;
    printf("Enter the number of input\n");
    scanf("%d",&n);
    createlist(n);
    printf("\n\nData in the list are\n");
    displaylist();
    InsertAtBeginning();
    printf("\n\nData in the list are\n");
    displaylist();
    return 0;
}

void createlist(int n)
{
    struct node *newnode,*current;
    int value,i;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
        printf("Memory full\n");
    else
    {
        printf("Enter first value\n");
        scanf("%d",&value);
        head->data=value;
        head->next=NULL;
        current=head;
        for(i=1; i<n; i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));

            printf("Enter value %d\n",i+1);
            scanf("%d",&value);
            newnode->data=value;
            newnode->next=NULL;
            current->next=newnode;
            current=newnode;
        }
    }
}

void InsertAtBeginning()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nEnter the value you want to insert at the beginning of the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void displaylist()
{
    struct node* current;
    current=head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
}
