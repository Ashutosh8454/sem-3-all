#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head,*head2;

struct node* create_SLL( struct node*);
void display_SLL(struct node*);
void concatinate(struct node*,struct node*);
int main()
{
    struct node concat;
    head=NULL;
    head2=NULL;
    head=create_SLL(head);
    head2=create_SLL(head2);
    display_SLL(head);
    display_SLL(head2);
    concatinate(head,head2);
    display_SLL(head);

    return 0;
    
}

struct node* create_SLL( struct node *main1)
{
    struct node *pre, *newnode;
    int n,ele,i;

    printf("\n How many Nodes? "); 
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("\nInsufficient Memory ");
            exit(0);
        }

        printf("\n Enter Data : ");
        scanf("%d",&ele);
        newnode->data=ele;
        newnode->link=NULL;

        if(main1==NULL)
        {
            main1=newnode;
            pre=newnode;
        }
        else{
             pre->link=newnode;
             pre=newnode;
        }
    }
    return main1;
}

void display_SLL( struct node *main1)
{
    struct node *temp;
    temp=main1;
    printf("\n Linked list is : ");
    while(temp!=NULL)
    {
        printf("%d-->\t",temp->data);
        temp=temp->link;
    }
}
void concatinate(struct node *head,struct node *head2){

    struct node *pre,*temp;
    temp=head;

    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    if(temp->link==NULL)
    {
        temp->link=head2;
    }


}