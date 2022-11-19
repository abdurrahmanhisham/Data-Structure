#include <stdio.h>
#include <stdlib.h>

void createlist(int n);
void displaylist();

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
    printf("Data in the list are\n");
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

void displaylist()
{
    struct node *current;
    current = head;

    while(current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}
