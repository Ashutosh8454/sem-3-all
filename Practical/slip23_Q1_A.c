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
void delete();
void addnodeEL();


int main()
{
    head=NULL;
    int key;

    do
    {
        printf("\nEnter 1 : Create linked list \n Enter 2 : Display list \nEnter 3 : Insert node \nEnter 4 : Delete node \n Enter 5 : Add node in last  \n Enter 6 : Exit \n");
        scanf("%d",&key);
        switch(key)
        {
            case 1 :create_SLL();break;
            case 2 :display_SLL();break;
            case 3 :insertnode();break;
            case 4 :delete();break;
            case 5 :addnodeEL();break;
            case 6 :printf("\n ThankYou for coding...");break;
            default:printf("Enter Right Key");
        }
        
    } while (key!=6);
    
    
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

void delete()
{
    struct node *temp,*cur;
    temp=head;
    int pos,cout=0;
    printf("Enter Position ");
    scanf("%d",&pos);

    while(temp!=NULL)
    {
        ++cout;
        if (cout==pos-1)
        {
           cur=temp->link;
           temp->link=cur->link;
           free(cur);
        }
        temp=temp->link;
    }
}

void addnodeEL()
{
    struct node *temp,*newnode;
    int ele;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
          printf("Insufficient memory :");
          exit(0);
    }

    printf("Enter Data ");
    scanf("%d",&ele);
    newnode->data=ele;
    newnode->link=NULL;

    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    if(temp->link==NULL)
    {
        temp->link=newnode;
    }
    else{
          printf("not inserted");
    }

     
}

