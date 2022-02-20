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
void insertnode();
int main()
{
    head=NULL;
    create_SLL();
    display_SLL();
    insertnode();
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

void insertnode()
{
    struct node *newnode ,*temp;
    int cnt=1,pos,ele;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nInsufficient memory");
        exit(0);
    }
    printf("\nEnter Data for the node to be inserted : ");
    scanf("%d",&ele);
    newnode->data=ele;
    newnode->link=NULL;

    printf("Enter Position :");
    scanf("%d",&pos);

    if(pos==1)/*insert node in first pos*/
    {
        newnode->link=head;
        head=newnode;

    }
    else{
        temp=head;
        while (cnt!=pos-1)
        {
            temp=temp->link;
            if(temp->link=NULL)
            {
                printf("\nPosition not found");
                return;
            }
            cnt++;
         }  
            newnode->link=temp->link;
            temp->link=newnode;
        
        
    }
}