#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
        struct node *next;
};
void display(struct node *ptr)
{

    printf("The Linked List is : \n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * IAE(struct node *head,int data)
{
    struct node *newnode,*current;
    current=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Value which is Inserting At the Last : ");
    scanf("%d",&data);
    newnode->data=data;

    while(current->next!=NULL)
    {
        current=current->next;

    }
    current->next=newnode;
    newnode->next=NULL;
    return head;
}

struct node * DAE(struct node * head)
{
    struct node *current,*temp;
    temp=head->next;
    current=head;
    while(temp->next!=NULL)
    {
        current=current->next;
        temp=temp->next;
    }
    current->next=NULL;
    free(temp);
    return head;

}
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    printf("Enter the Value of First : ");
    scanf("%d",&head->data);

    printf("Enter the Value of Second : ");
    scanf("%d",&second->data);

    printf("Enter the Value of Third : ");
    scanf("%d",&third->data);

    printf("Enter the Value of Fourth : ");
    scanf("%d",&fourth->data);


    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    int a,index;

    display(head);




    head=IAE(head,a);
    display(head);

    head=DAE(head);
    display(head);
}

