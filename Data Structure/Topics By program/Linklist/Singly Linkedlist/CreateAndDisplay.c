#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head;

void create_SLL();
void display_SLL();
int main()
{
    head=NULL;
    create_SLL();
    display_SLL();
    return 0;
    
}

void create_SLL()
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

        if(head==NULL)
        {
            head=newnode;
            pre=newnode;
        }
        else{
             pre->link=newnode;
             pre=newnode;
        }
    }
}

void display_SLL()
{
    struct node *temp;
    temp=head;
    printf("\n Linked list is : ");
    while(temp!=NULL)
    {
        printf("%d-->\t",temp->data);
        temp=temp->link;
    }
}