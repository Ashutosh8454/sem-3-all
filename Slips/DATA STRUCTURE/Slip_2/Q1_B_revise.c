#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node {

    int data;
    struct node *pre,*next;
}*head,*newnode,*pre,*temp;


void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode==NULL)
    {
        printf("Memory insufisient");
        exit(0);
    }

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    if(head==NULL)
    {
        head=newnode;
        pre=newnode;
        newnode->next=head;
        head->pre=newnode;
    }

    else{
           pre->next=newnode;
           newnode->pre=pre;
           pre=newnode;
           head->pre=newnode;
           newnode->next=head;
    }
}

 void display()
 {
     temp=head;

     printf("CDLL =: ");

     do
     {
        printf("%d\t",temp->data);
        temp=temp->next;
     } while (temp!=head);
     
 }


 int main()
 {
     int n;
     head=NULL;

     printf("Enter number of node : ");
     scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
         create();
     }
     display();
 }