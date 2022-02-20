#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *link1,*link2;
}*head;

void create_CDLL();
void display_CDLL();
int main()
{
    head=NULL;
    create_CDLL();
    display_CDLL();
    return 0;
}

void create_CDLL()
{
    struct node *pre,*newnode;
    int n,ele,i;

    printf("\nEnter Number of nodes");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("\nInsufficent memory :");
            exit(0);
        }

        printf("\nenter element :");
        scanf("%d",&ele);
        newnode->data=ele;

        if(head==NULL)
        {
            head=newnode;
            pre=newnode;
            newnode->link2=head;
        }
        else{
               head->link1=newnode;
               pre->link2=newnode;
               newnode->link1=pre;
               pre=newnode;
        }
    }
}

void display_CDLL()
{
    struct node *temp;
   temp=head;
   printf("\nLinked list are :=  ");
   do
   {
       printf("%d\t",temp->data);
       temp=temp->link2;
   }while(temp!=head);
}