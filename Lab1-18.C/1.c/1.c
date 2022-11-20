#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[100];
    int id;
    float cgpa;
    struct node *next;
} * head;

void createlist(int n)
{
    struct node *newnode, *current;
    int value, i;
    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
        printf("Memory full\n");
    else
    {
        printf("Input the information of student %d:\n", i + 1);
        printf("Enter the name: ");
        scanf("%s", head->name);
        printf("Enter the id: ");
        scanf("%d", &head->id);
        printf("Enter the cgpa: ");
        scanf("%f", &head->cgpa);
        head->next=NULL;
        current = head;
        for (i = 1; i < n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nInput the information of student %d:\n", i + 1);
            printf("Enter the name: ");
            scanf("%s", newnode->name);
            printf("Enter the id: ");
            scanf("%d", &newnode->id);
            printf("Enter the cgpa: ");
            scanf("%f", &newnode->cgpa);
            newnode->next=NULL;
            current->next=newnode;
            current=newnode;
        }
    }
}

void displaylist()
{
    struct node* current;
    current=head;
    printf("                            Information of all students are: \n");
    printf("\n");
    int i =1;
    while(current!=NULL)
    {
        printf("For student %d:\n\n", i);
        printf("Name is: %s\n",current->name);
        printf("Id is: %d\n",current->id);
        printf("CGPA is: %f\n",current->cgpa);
        current=current->next;
        i++;
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of students you want to list in the Student Information Management: ");
    scanf("%d",&n);
    printf("\n");
    createlist(n);
    displaylist();

    return 0;
}
