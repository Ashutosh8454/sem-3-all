#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *pre, *next;
}*head,*newnode,*pre,*temp;


void create_SDLL()
{
    int ele;
      newnode=(struct node*)malloc(sizeof(struct node));
      if(newnode==NULL)
      {
          printf("Memory insufficient ");
          exit(0);
      }

      printf("Enter element : ");
      scanf("%d",&ele);
      newnode->data=ele;

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
              pre->next=head;
      }

}

void display()
{
    
    temp=head;
    printf("Doubly circular linked list := ");

    do
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

int main()
{
    head=NULL;
    int n;
    printf("Enter number of node you want to enter: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        create_SDLL();
    }
    display();
}
