#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node *link1,*link2;
}*head;

void create_DLL();
void display_DLL();
int main()
{
    head=NULL;
    create_DLL();
    display_DLL();
    return 0;
}

void create_DLL()
{
    struct node *pre,*newnode;

    int n,ele,i;

    printf("\nEnter Number Of nodes?");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        
        if(newnode==NULL)
        {
            printf("\nInsuficient momery");
            exit(0);
        }
        printf("\nEnter Element : ");
        scanf("%d",&ele);
        newnode->data=ele;
        newnode->link1=NULL;
        newnode->link2=NULL;

        if(head==NULL)
        {
            head=newnode;
            pre=newnode;
        }
        else{
                newnode->link1=pre;
                pre->link2=newnode;
                pre=newnode;
        }

    }
}

void display_DLL()
{
    struct node *temp;
    temp=head;

    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->link2;
    }
}