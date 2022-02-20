#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head;

void Create_CSLL();
void Display_CSLL();

int main()
{
    head=NULL;
    Create_CSLL();
    Display_CSLL();
    return 0;
}

void Create_CSLL()
{
    struct node *pre,*newnode;
    int n,ele,i;
    printf("\nHow Many Nodes? ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));

        if(newnode==NULL)
        {
            printf("\nInsufficent memory : ");
            exit(0);
        }
        printf("Enter Data : ");
        scanf("%d",&ele);
        newnode->data=ele;
        
        if(head==NULL)
        {
           head=newnode;
           pre=newnode;
           newnode->link=head;
        }
        else
        {
            pre->link=newnode;
            pre=newnode;
            newnode->link=head;
        }
    }
}

void Display_CSLL()
{
    struct node *temp;
    temp=head;
    do{
         printf("%d-->",temp->data);
         temp=temp->link;
    }while(temp!=head);
}
