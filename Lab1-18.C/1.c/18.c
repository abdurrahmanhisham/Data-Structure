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
struct node * Inset_At_First(struct node *head,int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Value which is Inserting At the First : ");
    scanf("%d",&data);

    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct node * Delete_at_Frist(struct node *head)
{
    struct node *ptr=head;

    head=head->next;
    free(ptr);
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
    int a;
    display(head);


    head=Inset_At_First(head,a);
    display(head);


    head=Delete_at_Frist(head);
    display(head);


}
