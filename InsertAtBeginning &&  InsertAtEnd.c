//InsertAtBeginning &&  InsertAtEnd-------- 27-8-22

#include <stdio.h>
#include <stdlib.h>
void createlist(int n);
void displaylist();
void InsertAtBeginning();
void InsertAtEnd();
struct node
{
    int data;
    struct node *next;
}*head;
int main()
{
    int n;
    printf("Enter the number of input\n");
    scanf("%d", &n);
    createlist(n);
    displaylist();
    InsertAtBeginning();
    displaylist();
    InsertAtEnd();
    displaylist();
    return 0;
}
void createlist(int n){
    struct node *newnode, *current;
    int value, i;
    head = (struct node*) malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory is full");
    }
    else{
        printf("Enter first value of the list\n");
        scanf("%d", &value);
        head->data = value;
        head->next = NULL;
        current = head;
        for(i=1; i<n; i++){
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
void InsertAtBeginning(){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at the beginning of the linked list\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}
void InsertAtEnd(){
    struct node *current, *newnode;
    current = head;
    //Traverse to end
    while(current->next != NULL)
    {
        current = current->next;
    }
    //Assign newnode
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at the end of the linked list\n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    current->next = newnode;
    current = newnode;
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